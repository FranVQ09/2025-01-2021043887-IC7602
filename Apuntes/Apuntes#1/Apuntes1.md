# Redes
# 14 de marzo 2025 - Semana 4
# Francisco Villanueva Quirós - 2021043887

## La Capa Física
## Repaso
- Hay armónicos que dan diseño a la señal

## Deterioro de Trasmición
- Atenuación:
    - Pérdida de energía
    - Depende de la frecuencia
    - Madeios guiados decae de forma logarítmica con la distancia
- Distorción por retardo: Armónicas viajas a diferentes velocidades
- Limitación de ancho de banda: No todas las armonicas pasan por el sistema
- Ruido: Interferencia electromagnética

## Medios de transmición guiados
### Medios magnéticos
- Dispositivo que permite guardad información
- Almacenar datos en una cinta magnética o medios removibles
- Transportar físicamente la cinta o los discos al sistema destino y leerlos de nuevo
- Ancho de banda alto y precio de transporte o de transferencia alto
- Sneaker network: 
- Buen ancho de banda, mal retardo
    - minutos o horas, no milisegundos
- Ejemplo: AWS Snowmobile/ Snowball/ Snowcone
    - 100PB de información
    - 240GB x segundo 

En los cluod prividers hay un object storage, s3, RDS, redshift, DataLake. Estos servicios usan capa 7 y una capa intermedia llamada VPC, que expone una capa 3 y capa 4. Usualmente se define el VPC, dentro un subnet y ahi se define una Virtual Machine (VM), si esta en una red publica va a tener un IP publico y si no estan en publico, se va a tener un internet gateway que tiene la conexión hacia internet. En el medio se va a tener un NAT device que permite darle salida de intener una maquina que esta en una red privada. 
<br>

Pasar por internet con movimiento de datos:
- Low data volume
- seguridad no es un problema 

Los cloud providers no cobran envio de datos al cloud provider, se pueden mover grandes cantidades de datos. En la red on premise y se hace el envío de datos, va a estar limitado por el ancho de banda y hay que pagar. 
<br>

**Direct Connect:** Los puntos de presencia, son entradas a la red de amazon que no tienen que pasar por internet (no solo hay presencia si hay data center). <br>
**Partner Connect**: Va haber un tercero que tiene una conexión directa a un data center y los datos pasan por ahi.

### Par trenzado
- Dos cables aislados
- Trenzados de forma helicoidal.
- Forman una antena simple
- Evitar ruido externo
- Los estandares de LAN, usan diferente forma de los pares trenzados
    - Ethernet 100 Mps - dos pares
    - Ethernet 1 Gbps - cuatro pares
- **full-duplex**: Comunicación bidireccional simultánea (ambos dispositivos pueden enviar y recibir al mismo tiempo).
- **half-duples**: Comunicación bidireccional alternada (los dispositivos se turnan para transmitir).
- **simplex**: Comunicación unidireccional (un dispositivo solo transmite y el otro solo recibe).

### Cable coaxial
- Mejor ancho de banda que el par trenzado
- Mejor blindaje
- Mayores distancias y mas velocidad

### Fibra óptica
- Se usa en largas distancias y alta velocidad
- Componentes: Fuente de luz, medio de transmisión y detector
- Fibra de vidrio ultra delgada
- Fibra monomodo
- Fibra multimodo
- Un pulso de luz es un bit

## Medios de transmisión Inalambrico
### Espectro Electromagnetico
- Movimiento de electrones crea ondas electromagnéticas
- Al conectar un circuito a una antena, las ondas se pueden difundir y un receptor puede capturarlas
- Las características físicas de las ondas electromagnéticas pueden ser manipulas para transmitir información
- La frecuencia se mide en Hz (hertz)
- Existen longitudes de ondas masivas
- La cantidad de información que puede transmitir una señal depende del ancho de banda y la potencia recibida.  
