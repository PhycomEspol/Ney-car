# Accelerometer-car

Este proyecto trata sobre la creación de un carrito que es controlado por una app via blueooth junto con un sensor de aceleración

<h1> Carrito </h1>
El carrito usa dos motores que son controlados por un arduino y un puente H, adicional la tarjeta arduino recibe datos de un modulo bluetooth que los procesa y le da instrucciones al puente H y a su ves el puente H regula la potencia y como los motores deben girar.

#Controlador del carrito
El carrito sera controlado por una app que sera diseñada con MIT y que envia los datos al modulo bluetooth que esta integrada en el circuito del carrito.

#Acelerometro
Incluiremos en nuestro proyecto un sensor de aceleración que mide el valor en m/s2 en cada eje x,y,z de fuerzas isometricas y dinamicas, que permite saber la orientación del carrito hacia donde debe moverse.
