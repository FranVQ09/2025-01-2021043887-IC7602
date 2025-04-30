@echo off
echo [*] Verificando instalación de Docker, Helm y Make...

:: Aquí puedes incluir comandos para verificar o instalar dependencias manualmente

echo [*] Construyendo contenedores...
docker build -t dns_interceptor ..\docker\dns_interceptor
docker build -t dns_api ..\docker\dns_api
docker build -t health_checker ..\docker\health_checker
docker build -t dns_ui ..\docker\dns_ui

echo [*] Instalando dependencias Python...
pip install -r ..\dns_api\requirements.txt
