# Arduino_strobe_lights

![arduino](https://user-images.githubusercontent.com/66097352/115948620-2acf9500-a49d-11eb-9612-a31058aac269.gif)

Taller Programación de Arduino en Tinkercad usando programación en bloques<br />
Implementar en la plataforma Tinkercad y que tenga como elemento de control un Arduino un programa que cumpla con las siguientes características:<br />
• La programación debe ser en bloques <br />
• El programa debe controlar la secuencia y el tiempo de encendido de 4 LED´S (dos rojos y dos azules).<br /> 
• El sistema tiene dos entradas digitales (2 interruptores). <br />
• La lógica del sistema es la siguiente: <br />
a) Si los interruptores SW1 y SW2 están en un nivel lógico bajo, los LED´S deben permanecer apagados.<br />
b) Si el interruptor SW1 está en un novel lógico bajo y el interruptor SW2 está en nivel lógico alto: <br />
los dos LED’S rojos se encienden y los azules permanecen apagados, luego de 200 milisegundos los cuatro LED’S se apagan, 200 milisegundos después se encienden los LED’S rojos y los azules continúan apagados, después de 200 milisegundos deben estar apagados los cuatro LED’S; 200 milisegundos después se encienden los LED’S azules y los rojos deben estar apagados, nuevamente después de 200 milisegundos se apagan los 4 LED’S, 200 milisegundos más tarde se enciende solamente los LED’S de color azul y finalmente después de 200 milisegundo los cuatro LED’S deben quedar apagados. Esta secuencia se debe repetir indefinidamente mientras las entradas permanezcan en los niveles lógicos indicados al inicio.<br />
c) Si el interruptor SW1 pasa a un nivel lógico alto y SW2 a nivel bajo, se repite la secuencia del inciso anterior (b) pero el retardo de tiempo cambia de 200 milisegundos a 100 milisegundos .<br />
d) Si los dos interruptores (SW1 y SW2) se encuentran en un nivel lógico alto los cuatro LED’S deben permanecer encendidos.
