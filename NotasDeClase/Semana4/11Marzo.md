# Semana 4
# 11 de Marzo

## Encapsulamiento de datos
- **message**: nombre del elemento de comunicación en redes packet-switched
- **packet/datagram**: mensajes enviados por protocolos que funcionan a nivel de capa de red
- **frame**: mensaje que recorren niveles bajose del modelo de OSI
- **cell**: unidades de datos de tamaño fijo utilizadas en tecnologías como ATM (Asynchronous Transfer Mode); su tamaño constante permite un procesamiento más eficiente
- **segment**: unidad de datos en la capa de transporte (capa 4); contiene información como puertos origen/destino y, en el caso de TCP, números de secuencia y mecanismos de control de flujo


## Tipos de Servicios 
- Orientado a conexión
    - Primero se establece la conexión, luego se envían datos
    - Telefonía
- Sin conexión
    - Los datos se envía
    - Cada dato lleva una dirección
    - Los datos se enrutan por diferentes lugares
    - Envío de cartas

## Topología de red
1. **Peer to peer**: Todos los dispositivos funcionan por igual, pudiendo ser tanto clientes como servidores. No existe una jerarquía ni servidor central; cada nodo puede comunicarse directamente con cualquier otro.
2. **Fully connected**: Cada dispositivo tiene una conexión directa con todos los demás nodos. Ofrece máxima redundancia, pero requiere muchas conexiones, haciéndola costosa para redes grandes.
3. **Token ring (doble)**: Los dispositivos se conectan en forma de anillo donde un "token" circula; solo el que posee el token puede transmitir. La versión doble añade un segundo anillo en dirección contraria para redundancia.
4. **Estrella**: Todos los nodos se conectan a un dispositivo central (hub/switch). Fácil de implementar y gestionar, pero depende del dispositivo central como punto único de fallo.
5. **Lineal**: Dispositivos conectados en secuencia, uno tras otro. Simple pero vulnerable a fallos, ya que si un enlace falla, la red se divide.
6. **Mesh**: Los dispositivos tienen múltiples conexiones entre sí, creando rutas redundantes. Puede ser completa (todos conectados con todos) o parcial. Ofrece alta tolerancia a fallos pero es compleja de implementar.
7. **Bus**: Todos los dispositivos comparten un único medio de transmisión. Simple y económica de implementar, pero sensible a congestión y limitada en distancia. 

## Ejemplos de redes
- ARPANET
- NSFNET
- Redes Telefónicas

## Estandarización
- Estandares definen lo que se ocupa para interoperabilidad
- WIFI Alliance
- Estandares de facto
    - HTTP
    - Bluetooth
- Estandares de jure
    - gobiernos


## Capa Física
- Interactua con el hardware
- Capa de enlace a datos envía frames a la capa física
- Representa la capa 1 del modelo OSI
- Se encarga de la transmisión de bits crudos (1s y 0s) a través del medio físico
- Convierte datos digitales a señales analógicas o digitales según el medio

## Señalas Electromagnéticas
- Los datos al ser enviados por el medio fisico se convierten en señales elecromagneticas
- Datos puedes ser analogos o digitales
- Señales digitales: Son discretas y representan una serie de pulsos de tensión, se usan en circuitos de computadoras
- Señales analogicas: Se representan como una onda continua y se representa por mdio de ondas electromagnéticas
    - Cambia en el tiempo

## Características de ondas
- **Amplitud (A)**: Es la altura máxima de la onda medida desde su posición media o de equilibrio. Representa la intensidad o potencia de la señal. En comunicaciones, mayor amplitud generalmente significa mayor potencia o volumen de la señal. Se mide en voltios, amperios u otras unidades según el tipo de señal.
- **Frecuencia (f)**: Número de ciclos completos que una onda realiza por segundo. Determina cuán rápido oscila la señal y se mide en Hertz (Hz). En telecomunicaciones, diferentes frecuencias se utilizan para diferentes servicios (radio FM: 88-108 MHz, WiFi: 2.4 GHz o 5 GHz).
- **Longitud (λ)**: Distancia física entre dos puntos consecutivos que tienen la misma fase en una onda periódica (por ejemplo, de cresta a cresta). Se relaciona inversamente con la frecuencia: λ = c/f, donde c es la velocidad de la luz en el medio. Se mide en metros o submúltiplos.
- **Periodo (T)**: Tiempo que tarda la onda en completar un ciclo completo. Es el inverso de la frecuencia: T = 1/f. Se mide en segundos o submúltiplos (ms, μs, ns).
- **Fase (φ)**: Indica la posición de la onda en un instante determinado dentro de su ciclo. Se mide en grados (0° a 360°) o radianes (0 a 2π). Dos ondas pueden tener igual frecuencia pero estar desfasadas, lo que es crítico en técnicas como la modulación de fase.
- **Ciclo/oscilación**: Un ciclo completo de la onda, desde un punto hasta que vuelve a la misma posición y dirección. Representa la unidad básica de repetición en una señal periódica. En telecomunicaciones, los datos digitales se codifican manipulando ciclos de ondas analógicas.

## Análisis Fourier
- Cualquier función periódica, se puede construir como la suma de un número de senos y cosenos
- Permite descomponer una señal en sus componentes sinusoidales (frecuencias)
- Convierte una señal desde el dominio del tiempo al dominio de la frecuencia
- Fundamental para entender cómo se transmiten señales a través de diferentes medios
- Componentes principales:
    - Serie de Fourier: Representación de señales periódicas como suma de funciones sinusoidales
    - Transformada de Fourier: Generalización para señales no periódicas
    - Espectro de frecuencia: Representación gráfica de las frecuencias presentes en una señal

## Comunicación de datos
- Los canales reales afectan de distinta manera la transmisión de datos, un transmisor no puede enviar todos los armónicos con la misma **potencia**. Esto genera **distorción**
- Un medio (cable) transmite todas las amplitudes sin disminución, desde 0 hasta cierta frecuencia, este rango de frecuencias es llamado **ancho de band**
    - Defina la información que se puede enviar
- Banda base: Señales que van de 0 a una frecuencia máxima
- Pasa-banda: Se dezplazan para ocupar un rango de frecuencias mas altas. 

## Deterioro de la transmisión
- Atenuación:
    - Perdida de energia
    - Depende de la frecuencia
    - Medios guiados decae de forma logaritmica con la distancia
- Distorción por retardo: Armonicas viajan a diferenes velocidades
- Limitación del ancho de banda: No todas las armonicas pasan por el sistema
- Ruido: Ej, termico, interferencia electromagnetica. 

