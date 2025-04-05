
## Route 53
- DNS: Base de datos distribuida, que guarda información (key-value-pairs)
- Hosted zones: el nombre de dominio que yo manejo. Autoridad que mantiene el dominio. 
	- tiene servidores que manejan la información
 - A -> Routes traffic to and IPv4 address
 - CNAME

Values se pueden poner varios IP's separados por comas ( , ).
- Hace un round robin 

Routing policy:
- Simple routing
- Weigthed
- Geolocalización -> Ip donde esta el usuario
- Latency -> Los paquetes estan durando mucho en llegar
- IP- based
- Geoproximidad

Round trip:
- Geolocalización
- IP-based
- Geoproximidad 

## Enunciado del proyecto

Para validar que UDP haga la entrega hay que subir a CAPA 7 y realizar un protocolo que verifique esto. 

TCP garantiza la entrega de información pero es mas lento. 

RFC2929:
Siempre ve a tener los siguientes componentes cuando se hace un query:
- Q
- Opcode

## Componentes
1. DNS Interceptor: Utilizar lip curl para meter https en C. 
2. Firebase: key: com/google/www | value: {"type":"single"}

