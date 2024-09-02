#include "industrialli_hub.hpp"

industrialli_hub hub;

void setup(){
    /* Inicializa a industrialli hub e algumas bibliotecas
     * padrões da Industrialli Hub, incluindo a biblioteca 
     * de leds.
     */
    hub.begin();
}

void loop(){

    /* Ida.
    */
    for (int i = 0; i < 32; i++){
        /* Configura todos os leds para o estado
         * desligado.
         */
        leds.set_all(LOW);

        /* Configura o led i para o estado ligado.
         */
        leds.set_led(i, HIGH);

        /* Envia as informações via SPI.
         */
        leds.update();
        delay(25);
    }
    
    /* Volta.
    */
    for (int i = 31; i >= 0; i--){
        /* Configura todos os leds para o estado
         * desligado.
         */
        leds.set_all(LOW);

        /* Configura o led i para o estado ligado.
         */
        leds.set_led(i, HIGH);

        /* Envia as informações dos estados dos leds
         * para o CI via SPI.
         */
        leds.update();
        delay(25);
    }
}