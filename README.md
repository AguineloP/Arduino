# Arduino bare metal
Codando em linguagem C na unha, mexendo bit a bit, com portas I/O via registradores
__________
- ### [Código blink](https://github.com/AguineloP/Arduino/blob/fb694cdee751be902a8bf66af86f26a27955676b/C%C3%B3digos/blink.c)

- Código simples de ligar e desligar um led alimentado pela porta B5 do arduino num intervalo de 1 segundo

<div align=left>
      <img src="https://github.com/AguineloP/Images/blob/main/blink.png" alt="blink" height="250">
</div>

__________
- ## [Código contador](https://github.com/AguineloP/Arduino/blob/fb694cdee751be902a8bf66af86f26a27955676b/C%C3%B3digos/contador.c)

- Código simples utilizando um display de 7 segmentos como contador. Provavelmente fiz de forma não muito adequada nem eficaz. Mas por enquanto deixarei assim.

- As entradas de A a G do display são energizadas respectivamente pelas saídas do arduino B5, B4, B3, B2, B1, B0, D7. O ponto decimal é energizado pela saída D6.

- Os fios estão coloridos justamente para facilitar a visualização, sendo (tanto das entradas do display A-G quanto nas saídas do arduino B5-D6) nas cores vermelha, laranja, amarela, verde, ciano, azul, roxo e rosa.

- O terra (GND) é a fiação preta, onde se encontra o resistor. O catodo inferior do display está conectado ao catodo superior por um fio que passa por detrás do display.

<div align=left>
      <img src="https://github.com/AguineloP/Images/blob/main/contador.png" alt="contador" height="350">
</div>
