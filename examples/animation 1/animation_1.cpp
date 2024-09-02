#include "industrialli_hub.hpp"

industrialli_hub hub;

void setup(){
    /* Inicializa a industrialli hub e algumas bibliotecas
     * padrões da Industrialli Hub, incluindo a biblioteca 
     * de leds.
     */
    hub.begin();

    /* Configura todos os leds superiores para o estado
     * ligado.
     */
    for (size_t i = 24; i < 31; i++){
        leds.set_led(i, HIGH);
    }

}

void loop(){
    /* Alterna os estados de todos os leds.
     */
    for (size_t i = 0; i < 31; i++){
        leds.toggle(i);
    }
    
    /* Envia as informações dos estados dos leds
     * para o CI via SPI.
     */
    leds.update();
    delay(100);
}