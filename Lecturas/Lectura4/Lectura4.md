# Lectura 4 - Address Resolution Protocol

## Redes

## Preguntas

1. ¿En qué consiste ARP?
- Es uno de los mayores protocolos en TCP/IP suite. El propósito de este, es mapear una IPv4 a una dirección física. A nivel de capa de enlace, donde se utilizan las direcciones MAC,  el objetivo es encontrar el MAC address de un dispositivo en una red local (LAN) para la correspondiente dirección IPv4, la cual la red de aplicación esta intentando comunicarse. 
2. ¿Cómo funciona ARP?
- De acuerdo con la lectura, existen 7 pasos involucrados en el proceso del ARP y sus funciones en el internet.
	1. El emisor conoce la dirección IP del receptor o destinatario.
	2. IP le dice a ARP que cree una petición de tipo ARP. Esta petición contiene la dirección física, la IP del emisor y la IP del destinatario. La dirección física del destinatario es completada con 0's.
	3. El mensaje/petición es enviado por la capa de enlace de datos, donde se encapsula en frames usando la dirección física del emisor como la dirección origen y se utiliza una dirección física broadcast como dirección de destino.  
	4. Cada host o router recibe el frame. Como el frame contiene una dirección destino "broadcast". Cada dispositivo extrae el mensaje ARP y lo procesa. Todos, excepto el dispositivo objetivo, descartan el paquete. El dispositivo objetivo reconoce su propia dirección IP en el mensaje.
	5. La máquina destinataria responde con un mensaje de respuesta ARP, que contiene su dirección física. El mensaje es "unicast".
	6. El emisor recibe el mensaje de respuesta. Ahora este sabe la dirección física de la máquina objetivo.
	7. El datagrama IP que lleva los datos para el objetivo, se encapsula en un frame y se envía directamente al destino
3.  ¿Cuáles considera son las ventajas y desventajas de Static y Dynamic Mapping?
- Static Mapping consiste en crear una tabla que asocia direcciones lógicas con direcciones físicas y se almacena en cada máquina de la red. Esto permite que sea simple implementar una red pequeña en dispositivos que no suelen cambiar. Además, que la creación de la tabla habla de forma manual, lo que indica que se tiene un control de las asociaciones que existen, lo que permite tener control. Sin embargo existen limitaciones. Por ejemplo, Una maquina puede cambiar si NIC, lo que significa que se cree una nueva dirección física y habría que cambiarla en la tabla, no es tan flexible a estos cambios. En redes locales, la dirección física puede cambiar cada vez que se enciende la maquina, lo que hace que se creen nuevas direcciones físicas. Una computadora personas, puede moverse de una red física a otra, haciendo que se cambie la dirección física. Lo que al final se traduce en una actualización constante de la tabla. 
- Dynamic Mapping, cuando una maquina sabe la dirección local de otra máquina, puede usar protocoles para encontrar la dirección física, un protocolo puede ser el ARP. Esto hace que sea mas fácil manejar el cambio de direcciones físicas en las maquinas. Al usar protocolos como ARP, la resolución de direcciones se realiza en tiempo real solo cuando es necesario. Sin embargo, posee limitaciones. Dynamic Mapping requiere el uso de protocolos como ARP o RARP, lo que introduce una capa adicional de complejidad lo que hace que su implementación no esa tan fácil como una tabla. En ARP, hay un paso en el que todas los dispositivos en la red reciben un mensaje, lo que genera mucho tráfico. 
4. ¿Cuáles son las aplicaciones de un Proxy ARP?
- Uno de los usos del proxy ARP, es crear efecto subred (subnetting). La proxy ARP actúa en respuesta de un set de hosts. Cuando un router esta utilizando una proxy ARP recibe una request ARP en busca de la dirección IP de uno de estos hosts, el router envía una respuesta ARP anunciando su dirección física. Después de que el router recibe el paquete IP real, envía el paquete al host o router apropiado. En el ejemplo de la lectura, el administrador puede necesitar crear una subred sin cambiar todo el sistema para reconocer direcciones de subred. Una solución es agregar un router que ejecute un Proxy ARP. En este caso, el router actúa en nombre de todos los hosts instalados en la subred, esta es otra de las funcionalidades
5. ¿Cómo funciona ARP spoofing? Puede usar otros recursos para dar respuesta a esta pregunta.
- El ARP spoofing es como se conoce a un ataque cibernético, que consta de un ataque a las tablas de direcciones de ARP. Se utiliza para robas paquetes de datos de una red local. De acuerdo con Jiménez "enviar **mensajes falsificados ARP** a una LAN. Consigue vincular su dirección MAC con la dirección IP de un servidor, algo que como hemos visto anteriormente es necesario. A partir de ese momento empezaría a recibir cualquier tipo de información que ingrese a través de esa dirección IP y poder tomar el control del tráfico por completo." (Jiménez, 2024). 

## Referencias
- Jiménez, J, (2024). *Suplantación de ARP: qué es y cómo afecta a nuestra red*. Recuperado de: https://www.redeszone.net/tutoriales/redes-cable/ataques-arp-spoofing-evitar/#341494-tipos-de-arp-spoofing-o-poisoning

