# Internet Control Message Protocol

## Francisco Villanueva Quirós - 2021043887
## Redes

## Preguntas
1. Explique el funcionamiento del ICMP
- El Internet Control Message Protocol  es un protocolo utilizado dentro de una red de dispositivos interconectados para el control y notificación de errores durante el envío de datagramas IP. El ICMP no busca hacer que IP sea un protocolo confiable, sino proporcionar retroalimentación sobre problemas de comunicación. se utilizan mensajes ICMP cuando: Un datagrama no puede llegar a su destino, El gateway no tiene capacidad de buffer para reenviar el datagrama, El gateway indica una mejor ruta para enviar los datos. Los mensajes ICMP no se generan como respuesta a otros mensajes ICMP para evitar una cadena infinita de retroalimentaciones. Los mensajes ICMP se encapsulan dentro de datagramas IP y se identifican por el campo de tipo
2. Comente las aplicaciones de este protocolo en las comunicaciones
- Destination Unreachable: Informa al host de origen que un datagrama no pudo ser entregado porque la red, el host, el protocolo o el puerto no están disponibles, o porque se necesita fragmentación y no se permite.
- Time Exceeded: Se usa cuando un datagrama expira por tiempo TTL = 0 falla la reensamblación de fragmentos. Informa que el datagrama fue descartado por estas razones.
- Parameter Problem: Se utiliza cuando hay errores en los parámetros de cabecera de un datagrama IP que impiden su procesamiento. Informa la ubicación exacta del problema.
- Source Quench: Es una solicitud al host emisor para que reduzca la tasa de envío de tráfico, ya sea porque un gateway no tiene espacio en buffer o un host está sobrecargado. Si un gateway no puede procesar paquetes tan rápido como los recibe, puede pedir al host emisor que reduzca la velocidad de envío
- Redirect: Permite a un gateway *nformar a un host de una mejor ruta hacia un destino. Se utiliza para optimizar el encaminamiento.
- Echo request: Se utilizan para verificar la conectividad entre dispositivos. El emisor envía un echo, y el receptor responde con un echo reply, retornando los datos recibidos.
- Timestamp: Permite obtener marcas de tiempo para medir el tiempo de transmisión y sincronización entre hosts.
- Information Request: Un host puede utilizarlos para descubrir el número de red al que pertenece.
Cuando un datagrama no puede ser entregado, ICMP puede enviar un mensaje al host origen indicando el problema. Cuando un gateway detecta que existe una mejor ruta para alcanzar una red de destino, puede notificar al host origen para que cambie su ruta. ICMP permite probar si un host está activo o si una ruta está funcionando correctamente

