#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "utils.h"

int main(void)
{
    printf("[DNS Interceptor] Iniciando...\n");

    if (setup_udp_server() < 0)
    {
        fprintf(stderr, "No se pudo iniciar el servidor.\n");
        return EXIT_FAILURE;
    }

    listen_dns_requests();

    close(sockfd);
    return EXIT_SUCCESS;
}
