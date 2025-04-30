#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <signal.h>
#include "utils.h"

#define PORT 53
#define BUFFER_SIZE 512
#define LOG_FILE "dns_packets.txt"

int sockfd; // Variable global para el socket

void handle_exit(int signum)
{
    printf("\n[!] Cerrando servidor DNS...\n");
    if (sockfd >= 0)
    {
        close(sockfd);
    }
    exit(0);
}

int setup_udp_server()
{
    struct sockaddr_in server_addr;

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0)
    {
        perror("Error al crear el socket");
        return -1;
    }

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    if (bind(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0)
    {
        perror("Error al enlazar el socket");
        close(sockfd);
        return -1;
    }

    printf("[+] Servidor DNS escuchando en UDP/%d\n", PORT);
    return 0;
}

void log_packet(const char *buffer, int length, const struct sockaddr_in *client_addr)
{
    FILE *file = fopen(LOG_FILE, "a"); // Modo texto, append
    if (file == NULL)
    {
        perror("fopen");
        return;
    }

    for (int i = 0; i < length; i++)
    {
        fprintf(file, "%02x", (unsigned char)buffer[i]); // HEX puro, sin espacios ni saltos de línea
    }

    fprintf(file, "\n"); // Un paquete por línea
    fclose(file);
}

void listen_dns_requests()
{
    char buffer[BUFFER_SIZE];
    struct sockaddr_in client_addr;
    socklen_t addr_len = sizeof(client_addr);

    printf("[+] Esperando solicitudes DNS...\n");

    while (1)
    {
        int n = recvfrom(sockfd, buffer, BUFFER_SIZE, 0, (struct sockaddr *)&client_addr, &addr_len);
        if (n < 0)
        {
            perror("recvfrom");
            continue;
        }

        printf("[+] Paquete recibido de %s:%d\n", inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));
        print_dns_header_info(buffer);
        log_packet(buffer, n, &client_addr);
    }
}
void print_dns_header_info(const char *buffer)
{
    unsigned short id = ntohs(*(unsigned short *)&buffer[0]);
    unsigned short flags = ntohs(*(unsigned short *)&buffer[2]);
    unsigned short qdcount = ntohs(*(unsigned short *)&buffer[4]);
    unsigned short ancount = ntohs(*(unsigned short *)&buffer[6]);
    unsigned short nscount = ntohs(*(unsigned short *)&buffer[8]);
    unsigned short arcount = ntohs(*(unsigned short *)&buffer[10]);

    int qr = (flags >> 15) & 0x1;
    int opcode = (flags >> 11) & 0xf;
    int aa = (flags >> 10) & 0x1;
    int tc = (flags >> 9) & 0x1;
    int rd = (flags >> 8) & 0x1;
    int ra = (flags >> 7) & 0x1;
    int z = (flags >> 6) & 0x1;
    int ad = (flags >> 5) & 0x1;
    int cd = (flags >> 4) & 0x1;
    int rcode = flags & 0xf;

    printf("\n========== DNS HEADER ==========\n");
    printf("ID:        0x%04x (%u)\n", id, id);
    printf("QR:        %d (0=query, 1=response)\n", qr);
    printf("Opcode:    %d\n", opcode);
    printf("AA:        %d\n", aa);
    printf("TC:        %d\n", tc);
    printf("RD:        %d\n", rd);
    printf("RA:        %d\n", ra);
    printf("Z:         %d\n", z);
    printf("AD:        %d\n", ad);
    printf("CD:        %d\n", cd);
    printf("RCODE:     %d\n", rcode);
    printf("QDCOUNT:   %u\n", qdcount);
    printf("ANCOUNT:   %u\n", ancount);
    printf("NSCOUNT:   %u\n", nscount);
    printf("ARCOUNT:   %u\n", arcount);
    printf("================================\n");

    // Mostrar payload en HEX
    printf("============= PAYLOAD (HEX) =============\n");
    for (int i = 12; i < 512; i++) // Comienza después del header (12 bytes)
    {
        if (buffer[i] == '\0')
            break; // Opcional: cortar en null byte si querés
        printf("%02x ", (unsigned char)buffer[i]);
        if ((i - 12 + 1) % 16 == 0)
            printf("\n");
    }
    printf("\n=========================================\n");
}
