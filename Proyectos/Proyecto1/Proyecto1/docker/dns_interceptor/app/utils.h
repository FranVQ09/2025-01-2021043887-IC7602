#ifndef UTILS_H
#define UTILS_H

#include <arpa/inet.h>

extern int sockfd;

int setup_udp_server(void);
void listen_dns_requests(void);
void log_packet(const char *buffer, int length, const struct sockaddr_in *client_addr);
void print_dns_header_info(const char *buffer);

#endif // UTILS_H
