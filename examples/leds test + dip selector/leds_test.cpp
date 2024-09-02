#include "industrialli_hub.hpp"

industrialli_hub hub;

void setup(){
    /* Inicializa a industrialli hub e algumas bibliotecas
     * padrões da Industrialli Hub, incluindo a biblioteca 
     * de leds.
     */
    hub.begin();

    pinMode(PD10, INPUT);
}

void loop(){

    /* Se o seletor DIP 1 estiver ativado, configura
     * todos os leds para o status ligado.
     */
    if(digitalRead(PD10)){
        leds.set_all(HIGH);
    }else {
        leds.set_all(LOW);
    }

    /* Envia as informações dos estados dos leds
     * para o CI via SPI.
     */
    leds.update();
    delay(100);
}