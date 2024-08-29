[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

# industrialli leds

Biblioteca para manipulação dos leds da Industrialli Hub para o framework Arduino com o uso da biblioteca [stm32ino](https://github.com/stm32duino/).

> [!IMPORTANT]  
> Consulte a biblioteca principal da Industrialli Hub.

## Exemplo
No exemplo abaixo, é realizado uma simples animação com os leds, alternando os leds inferiores e superiores da Industrialli Hub entre ligado e desligado.

```cpp
#include "industrialli_hub.hpp"

industrialli_hub hub;

void setup(){
    hub.begin();
}

void loop(){
      for (size_t i = 0; i < 24; i++){
        leds.set_led(i, HIGH);
      }
		
      leds.update();

      delay(500);
      leds.set_all(LOW);
      leds.update();
      delay(500);

      for (size_t i = 24; i < 32; i++){
        leds.set_led(i, HIGH);
      }

      leds.update();

      delay(500);
      leds.set_all(LOW);
      leds.update();
      delay(500);
}
```

## Funções

Segue abaixo as funções disponíveis para a manipulação dos leds da Industrialli Hub.

<details>
<summary>begin</summary>

Inicializa os leds.

**Parâmetros:** void

**Retorno:** void

**Exemplo**
```cpp
leds.begin();
```
</details>

<details>
<summary>start</summary>

Realiza uma animação com os leds.

**Parâmetros:** void

**Retorno:** void

**Exemplo**
```cpp
leds.start();
```
</details>

<details>
<summary>set_led</summary>

Configura um estado para um led específico.

**Parâmetros:** 
- uint8_t: número do led entre 0 e 31;
- bool: estado do led: 0/LOW para desligar e 1/HIGH para ligar.

**Retorno:** void

**Exemplo**
```cpp
leds.set_led(0, HIGH);
leds.update();
```
</details>

<details>
<summary>set_all</summary>

Configura um estado para todos os leds.

**Parâmetros:** 
- bool: estado dos leds: 0/LOW para desligar e 1/HIGH para ligar.

**Retorno:** void

**Exemplo**
```cpp
leds.set_all(HIGH);
leds.update();
```
</details>

<details>
<summary>update</summary>

Envia os estados dos leds para o CI.

**Parâmetros:** void

**Retorno:** void

**Exemplo**
```cpp
leds.set_all(HIGH);
leds.update();
```
</details>
