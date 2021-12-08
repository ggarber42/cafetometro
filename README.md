# Cafetômetro - O termômetro de LED que seu café precisa!

1. [ Motivação. ](#motivacao)
2. [ Descrição ](#desc)
3. [ Tinkercad ](#tinkercad)
4. [ Materiais ](#materiais)
5. [ Imagens e vídeos ](#fotos)
6. [Lógica de programação](#programação)

<a name="motivacao"></a>
## 1. Motivação

Esse projeto tem como objetivo resolver dois problemas, dar um uso ao meu arduino esquecido e lembrar de tomar o café ainda quente.

Além disso, o cafetômetro cumprirá a função de movimento agradável que fica no canto do olho.

<a name="desc"></a>
## 2. Descrição

A ideia do projeto é ter um termômetro que me avise de maneira visual quando o café está esfriando. Isso é feito através da variação da frequência com que o LED pisca. Quando mais frio o café, maior a frequência com que o LED vai piscar.

No projeto final, o sensor de temperatura vai ficar acoplado em um porta copo e este irá ficar em contato com a caneca com café. O circuito por sua vez ficará em um escudo conectado ao arduino.

<a name="tinkercad"></a>
## 3. Tinkercad

Tinkercad do projeto neste momento

[TinkerCad](https://www.tinkercad.com/things/aXVhiHVS6pv-cafetometro-setup/editel?sharecode=AZhJOKGMhrTikDS8NJhCn4-B_fKZe2LaZXSaKkZIl34)

<a name="materiais"></a>
## 4. Materiais

+ 1 arduino uno
+ 4 leds verdes
+ 4 resistores de 220 ohms
+ 1 protoboard
+ 1 sensor de temperature Lm35

<a name="img"></a>
## 5. Imagens e vídeos

**Esquema de circuito**

![image](https://user-images.githubusercontent.com/26423380/145131782-f4571630-6006-4ff0-9743-ff8bf0689b7d.png)

O esquema acima foi montado, vídeo abaixo demonstrando:

https://user-images.githubusercontent.com/26423380/145131211-20617071-a299-444b-90c4-1f861d89870e.mp4

E uma gravação da tela, lendo a temperatura do sensor:

https://user-images.githubusercontent.com/26423380/145132230-f36b1934-8c74-4b30-993c-e6a33f6a6912.mp4

<a name="melhorias"></a>
## 6. Melhorias

A principal melhoria é montar um circuito solando os fios e acoplar de fato o sensor no porta copo. Uma ideia dada é utilizar uma folha de cobre pra aumentar a sensibilidade do sensor.

Além disso, uma vez provando o conceito na protoboard, o último passo seria montar um escudo de arduino com esse conceito para que de fato pudessemos ter o cafetômetro em nossas mesas funcionando.

<a name="programação"></a>
## 7. Lógica de programação

[Código aqui](https://github.com/ggarber42/cafetometro/blob/main/main.c)
