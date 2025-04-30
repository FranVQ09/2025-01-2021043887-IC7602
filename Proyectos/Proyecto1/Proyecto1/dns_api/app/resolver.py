import socket
import os

DNS_SERVER = os.getenv("DNS_REMOTE", "8.8.8.8")
DNS_PORT = 53

def resolve_dns_packet(packet: bytes) -> bytes:
    with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as s:
        s.settimeout(5)
        s.sendto(packet, (DNS_SERVER, DNS_PORT))
        response, _ = s.recvfrom(512)
    return response
