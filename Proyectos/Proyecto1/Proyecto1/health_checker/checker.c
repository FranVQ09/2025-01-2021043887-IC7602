#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <curl/curl.h>

int check_tcp(const char *host, int port) {
    int sock;
    struct sockaddr_in server;
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) return 0;

    server.sin_family = AF_INET;
    server.sin_port = htons(port);
    server.sin_addr.s_addr = inet_addr(host);

    int result = connect(sock, (struct sockaddr*)&server, sizeof(server));
    close(sock);
    return result == 0;
}

int check_http(const char *url) {
    CURL *curl = curl_easy_init();
    long response_code;
    if (!curl) return 0;

    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_NOBODY, 1L); // HEAD
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 5L);
    curl_easy_perform(curl);
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
    curl_easy_cleanup(curl);

    return response_code >= 200 && response_code < 400;
}

int main() {
    printf("[HealthChecker] Iniciado\n");

    // Esto simula pruebas para demo
    const char *ip = "8.8.8.8";
    const char *url = "http://example.com";

    if (check_tcp(ip, 80)) {
        printf("[TCP] %s: OK\n", ip);
    } else {
        printf("[TCP] %s: FALLÓ\n", ip);
    }

    if (check_http(url)) {
        printf("[HTTP] %s: OK\n", url);
    } else {
        printf("[HTTP] %s: FALLÓ\n", url);
    }

    // Aquí iría lectura de Firebase y actualización (en futuras versiones)

    return 0;
}
