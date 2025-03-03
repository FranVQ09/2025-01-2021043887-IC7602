# Semana 2
# Clase martes 25 feb

### Modelo OSI

El modelo OSI (Open Systems Interconnection) es un marco conceptual que estandariza las funciones de un sistema de comunicación o red en siete capas distintas. Cada capa tiene funciones específicas y se comunica con las capas adyacentes. Las capas del modelo OSI son:

1. **Capa Física:** Se encarga de la transmisión de bits a través de un medio físico, como cables o señales inalámbricas. Define las características eléctricas y físicas del hardware.

2. **Capa de Enlace de Datos:** Proporciona la transferencia de datos libre de errores entre dos nodos conectados directamente. Incluye la detección y corrección de errores y el control de flujo. Ejemplo: Ethernet.

3. **Capa de Red:** Gestiona el direccionamiento y el enrutamiento de los datos entre dispositivos en diferentes redes. Ejemplo: IP (Internet Protocol).

4. **Capa de Transporte:** Asegura la transferencia confiable de datos entre dos dispositivos. Proporciona control de flujo, segmentación y reensamblaje de datos. Ejemplo: TCP (Transmission Control Protocol).

5. **Capa de Sesión:** Establece, gestiona y termina las sesiones entre aplicaciones. Coordina la comunicación entre sistemas. Ejemplo: RPC (Remote Procedure Call).

6. **Capa de Presentación:** Traduce los datos entre el formato de la red y el formato que las aplicaciones pueden procesar. Maneja la codificación, cifrado y compresión de datos. Ejemplo: SSL/TLS.

7. **Capa de Aplicación:** Proporciona servicios de red directamente a las aplicaciones del usuario final. Ejemplo: HTTP, FTP, SMTP.


### Paquetes en redes

Los paquetes en redes cuentan con un header, payload y trailer. A continuación se describen cada una de estas partes:

- **Header:** El header contiene la metadata necesaria para el enrutamiento y entrega del paquete. Incluye información como la dirección de origen, la dirección de destino, el tipo de protocolo, y otros datos de control. Mediante el header se pasa la metadata hacia el payload.

- **Payload:** El payload es la carga útil del paquete, es decir, los datos reales que se están transmitiendo. Es la parte del paquete que contiene la información que se quiere enviar de un punto a otro.

- **Trailer:** El trailer se encuentra al final del paquete y generalmente contiene información de verificación de errores, como la checksum. La checksum es un valor calculado a partir del contenido del paquete que permite detectar errores en la transmisión. Del trailer al payload va la checksum.

En el header va la dirección de destino. La fuente y destino solo tiene vida en la capa en la que se encuentra.


### Capa 2: 
**MAC addresses:** 
Las direcciones MAC (Media Access Control) son identificadores únicos asignados a las interfaces de red para las comunicaciones en la capa de enlace de datos de un segmento de red. Las direcciones MAC se utilizan para identificar de manera única a los dispositivos en una red local (LAN).

### Capa 3 - 4:
**MTU**:
La MTU (Maximum Transmission Unit) es el tamaño máximo de paquete que puede ser enviado en una sola transmisión en una red. La MTU se mide en bytes e incluye tanto el header como el payload del paquete. La configuración adecuada de la MTU es importante para optimizar el rendimiento de la red y evitar la fragmentación de paquetes.

- Cuando paso un paquete de la capa inferior va a ser un paquete cuyo payload va a ser el paquete completo de la capa superior. 
- Con forme voy bajando en capas voy empaquetando
- Cuando el paquete es muy grande se parte en paquetes mas pequños. 

### Red Local

Se le llama LAN (Local Area Network). Se va a tener un router que viene empaquetado con un firewall que tiene capa 3, 4, 7. Se va a tener:

- DNS (Domain Name Service)
- DHCP (Dynamic Host Configuration Protocol)
- switch (hub)

Todo dispositivo de red, va a tener una tarjeta de red: 
- Siempre va a tener asociado un MAC. 
- Una configuración de capa 3 de antenamo, consiste en enviar un IP.


**Rangos de IP privadas**: 10.0.0.0 - 10.255.255.255, 172.16.0.0 - 172.31.255.255 y 192.168.0.0 - 192.168.255.255

Determinar el tamaño de la red: 
- Ej, 192.168.0.0/24
- #red = 192.168.0.0
- #bits mask = 24 | 255.255.255.0
- Capacidad maxima: 32 - 24 = 2^8 = 256 (maximo de hosts en mi red. ) 
- Broadcast -> último número de mi red: 192.168.0.255
- Router: 192.168.0.1 (primer o último IP de la red)

#### Tipos de configuración
1. **Configuración estática:** 
   En una configuración estática, las direcciones IP y otros parámetros de red se asignan manualmente a cada dispositivo en la red. Esto significa que un administrador de red debe configurar cada dispositivo individualmente. Este tipo de configuración es más común en redes pequeñas o en dispositivos que requieren una dirección IP fija, como servidores y dispositivos de red.

2. **Configuración dinámica:** 
   En una configuración dinámica, las direcciones IP y otros parámetros de red se asignan automáticamente a los dispositivos en la red mediante un servidor DHCP (Dynamic Host Configuration Protocol). Esto simplifica la administración de la red, ya que los dispositivos pueden obtener sus configuraciones de red automáticamente al conectarse a la red. Es común en redes grandes y en entornos donde los dispositivos se conectan y desconectan con frecuencia.

   El DHCP crea una tabla de ruteo, esta tabla explica quien es el siguiente nodo en la red. 

### Caso de comunicación
- 192.168.0.67 (192.168.0.0) -> 192.168.0.89 <br>
192.168.0.89 <br>
AND 255.255.255.0 <br>
-- <br>
192.168.0.0


### NAT = Network Address Translation






