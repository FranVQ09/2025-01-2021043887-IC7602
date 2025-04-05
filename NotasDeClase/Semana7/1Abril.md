# Semana 7

## Conceptos
- La **multiplexación** en redes es una técnica utilizada para combinar dos o más señales y transmitirlas por un solo medio de transmisión, lo que permite varias comunicaciones simultáneas.
## Problema de asignación de canal
- Como asignar un solo canal de difusión entre usuarios compitiendo por este
- Canal Porción del espectro, alambre o fibra
- Ejemplo llamada telefónica
- Canal de difusión se conoce como canales
## Asignación Estática
- Dividir el canal usando Frequency Division Multiplexing o Time Division Multiplexing
- N usuarios, el ancho de banda se divide en N porciones iguales
- Sencillo y eficiente con cantidad fija y constante de usuarios, con transmisiones estables.
- Ejemplo de radio FM
	- Muchos usuarios o variable
	- Trafico en ráfagas 
- Uso eficiente del espectro. 
## Aspectos importantes
- Tráfico independiente,
- Tramas se generar de forma independiente en ráfagas
- Canal único 
- Colisiones observables
- Tiempo continuo o ranurado
- Detección de portadora: Cuando transmito me puedo dar cuenta si alguien esta transmitiendo. 
- Ningún protocolo multiacceso garantiza entrega confiable
## ALOHA (Puro)
A nivel de comunicaciones satelitales voy a tener estaciones en tierra y puede ser moviles. Cuando una estación quiere enviar puede enviar tramas, pero estas pueden chocar y se pierden. El repetidor agarra la trama y la envía en todas direcciones. 

## Carrier Sense Multiple Access - persistent - 1
- Cuando una estación debe enviar datos, revisa el canal
	- Inactivo: Envía
	- Activo: Espera
- Existe colisión:
	- Esperar un tiempo aleatorio
	- Si dos o mas estaciones que quieren enviar, se van a quedar dormidas hasya que el canal no este activo y ese envian al mismo tiempo -> Puede generar choques
- Cuando el canal esa inactivo, transmite con una probabilidad de 1
- Timing: Entre el momento que una estación observa el canal inactivo y transmite, el  retardo de la señal puede hacer que otra vea el canal inactivo también. 
## Carrier Sense Multiple Access - Non persistent
- Estación escucha y si el canal esta inactivo transmite
- Si esta activo lo monitorea de forma aleatoria
	- Se duerme y revisa de nuevo
- Ofrece mejor rendimiento que el CSMA-Persistent 1
- Presenta mayores recursos
## Carrier Sense Multiple Access - Persisten P
- Usa Canales Ranurados
- Estación escucha el canal
- Si se encuentra inactivo, se transmite con una probabilidad (0,75) definida por el protocolo
- Se posterga la transmisión a la siguiente ranura con la probabilidad de 1 - p
- Se repite el algoritmo hasta que se transmite la trama 
- Si el canal se encuentra activo, espera a la siguiente ranura y ejecuta el algoritmo 
## CSMA/CD - Con detección de errores
- Detección rapida de colisión 
- LAN / Ethernet
- Detección es analogico
- Siguen el mismo esquema, detecta colision espera un tiempo aleatorio e intenta de nuevo. 
## Mapa de Bits
- Libre de colisiones
- N estaciones se numerar de 0 a n - 1
- El periodo de contención es de N ranuras
## Paso de Token
- Libre de colisiones
- Estaciones transmiten por turno
- Pasan un mensaje llamado Token
# Ethernet
## Ethernet Clásica
