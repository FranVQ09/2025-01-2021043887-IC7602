#!/bin/bash

echo "[*] Instalando dependencias..."
sudo apt update
sudo apt install -y docker.io helm make gcc python3-pip

echo "[*] Construyendo contenedores..."
docker build -t dns_interceptor ../docker/dns_interceptor
docker build -t dns_api ../docker/dns_api
docker build -t health_checker ../docker/health_checker
docker build -t dns_ui ../docker/dns_ui

echo "[*] Instalando dependencias de Python..."
pip3 install -r ../dns_api/requirements.txt
