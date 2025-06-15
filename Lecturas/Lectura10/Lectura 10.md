# Performance Metrics

## Francisco Villanueva Quirós - 2021043887
## Redes

## Preguntas

1. ¿Qué métricas de rendimiento son importantes en los Lead Balancers que deben ser examinadas con Observabilidad?
- Conexiones por segundo: De acuerdo con la lectura, es considera la métrica de rendimiento mas importante para el tráfico de HTTP. Esta se encarga de medir cuantas conexiones entrantes puede aceptar el dispositivo en un segundo. La razón de que esta métrica sea tan crítica es que establecer y cerrar conexiones HTTP implica una gran carga para el procesador de red, esta métrica es normalmente la primera en alcanzar un límite de rendimiento.
- Conexiones concurrentes totales: Esta métrica determina cuantas sesiones TCP activas puede mantener o soportar el dispositivo. Usualmente, el número esta limitado por la memoria disponible del procesador o núcleo del SLB. En muchos casos no es el primer cuello de botella, sigue siendo importante en ciertos perfiles de tráfico. 
- Rendimiento: Esta métrica se mite en bits por segundo usualmente. Mide la cantidad de tráfico que puede pasar a través del balanceador. Se puede ver limitada por el tamaño de los paquetes y la tasa de transmisión de estos. Depende del tamaño de los paquetes y cuantos paquetes se transmiten por segundo. 
2. Fuera de network hardware provisioning, ¿ Que otra aplicación tiene esta información?
- Traffic Profiles: Las métricas permiten **identificar el tipo de tráfico** que genera un sitio web, por ejemplo HTTP, FTP o Web Store. Es importante para mejorar el diseño del sitio, asegurar el sitio y ajustar su rendimiento. 
- Web Stores: En sitios de comercio electrónico, las métricas son esenciales para garantizar una buena experiencia de usuario. Es importante ya que busca mejorar la velocidad de respuesta, la capacidad de mantener conexiones, el uso de stateful redundancy, para evitar interrupciones
- The Wall: Se utiliza para **detectar el punto de saturación** del sistema. El rendimiento cae abruptamente, por lo que es vital monitorear estas métricas para anticiparse a problemas de disponibilidad y estabilidad.
- Additional feature: Cuando se activan mas funciones en un load balancer, el rendimiento puede degradarse, esta métricas ayudan a evaluar el impacto de estas funcionalidades

