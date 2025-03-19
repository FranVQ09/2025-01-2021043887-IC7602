# Semana 5

# 18 de Marzo

## Radiotransmisión
- Longitud de onda ~ 10^3, frecuencia ~ 10^4
- Generación sencilla
- Cubren grandes distancias
- Pueden penetrar obstáculos fácilmente
- Omnidireccionales, no necesitan alineación
- Baja frecuencia, fácil penetrar obstáculos -> Atenuación
- Altas frecuencias, viajan en linea recta y rebotan en los obstáculos
- VLF, LF y MF siguen la curvatura de la tierra
- HF y VHF: rebotan en la ionosfera

## Microondas
- Mas de 100 Mhz
- Ondas viajan en linea recta (línea vista)
- Requieren repetidores
- Bajo costo
- Escaso espectro

## Industrial, Scientific, Medical (ISM)
- No ocupan licencia
- Mouse inalámbrico, controles de cochera, etc
- Baja potencia de transmisión 
- Dispersión de señal a través de un rango de frecuencias
- 2.4 GHz y 5 GHz
- WIFI puede tener interferencia con hornos microondas

## Transmisión Satelital
La transmisión satelital es un método de comunicación que utiliza satélites artificiales ubicados en órbita terrestre para recibir, amplificar y retransmitir señales de información entre diferentes puntos de la Tierra.

- Una estación terrena **transmisora** envía señales hacia el satélite (enlace ascendente)
- El satélite recibe, procesa y amplifica estas señales
- El satélite retransmite la información hacia la Tierra (enlace descendente)
- Las estaciones **receptoras** captan las señales enviadas
### Ventajas
- Cobertura geográfica extensa
- Independencia de infraestructura terrestre
- Comunicación punto a multipunto eficiente

### Pregunta
- La mejor forma de dar conexión lo mejor es satelital
- Son de bajo costo y bajo ancho de banda

## Otras formas de transmisión
- Transmisión infrarroja: corto alcance por ejemplo televisores
	- no penetran objetos
	- no penetran paredes = no interferencias 
- Transmisión por ondas de luz:
	- óptica en espacio libre
	- conectar LAN mediante láser
	- es unidireccional
	- Difícil de mantener ya que existe mucha interferencia 
	- Dificultad para alinear 

## Modulación Digital
- Señales analogicas que se representan bits

## Non Return Zero
- Símbolos: 0 y 1
- Non return to Zero:
	- tensión negativa 0 y tensión positiva 1
	- Ausencia de luz 0 y presencia de luz 1
	- Muestreo regular de la señal
- Las señales no son iguales: El canal y el ruido la pueden atenuar y distorsionar. 
	- se asocian la señal con el simbolo mas cercano
- Se puede optimizar usando mas de los dos niveles de señalización 
	- Potencia para diferenciar los n niveles
- Sincronizar relojes

## Manchester
- ¿Donde inicia y termina un símbolo?
- Relojes exactos?
- Enviar una señal separada
- Mezclar la señal del reloj con la señal de datos mediante XOR
- Reloj opera doble de la señal de bit 
- Alto a bajo = 1
- Bajo a alto = 0
- Ethernet

## Non Return Zero Inverted
- Se codifica un 1 como transición 
- Se codifica un 0 como 

## Transmisión Pasa Banda
- Rangos de frecuencia que no inician en 0 

## Multiplexión 
- Multiplexión por frecuencia y Multiplexión por frecuencia
- Comparte lineas de comunicación entre muchas señales
- Frequency Division Mutiplexing: Divide el espectro en bandas de frecuencia
	- AM o FM
	- Bandas grandes para evitar colisiones
	- Banda guarda
- Orthogonal Frequency Multiplexing
	- No usa banda guarda
	- Envía datos digitales