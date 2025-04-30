FROM debian:bullseye-slim

WORKDIR /app

COPY ./app /app

RUN apt-get update && apt-get install -y build-essential curl libcurl4-openssl-dev dnsutils iputils-ping net-tools inetutils-traceroute iproute2 hexyl bsdmainutils && apt-get clean && rm -rf /var/lib/apt/lists/*

# Compilar el proyecto usando el Makefile
#RUN make

EXPOSE 53/udp

# Ejecutar el binario generado (ajusta el nombre según tu Makefile)
CMD [ "bash" ]