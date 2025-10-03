#include "uart_sim.h"
#include <stdio.h>

/**
 * @brief   Convert uart_label_t to string
 */
static const char* label_to_str(uart_label_t label) {
    switch (label) {
        case UART_LABEL_TEMP: 
            return "TEMP";
            break;
        default: 
            return "UNKNOWN";
            break;
    }
}


/**
 * @brief   Simulate an UART link sending float value
 * @param   label   uart_label_t to identify sensor
 * @param   value   value mesured by the sensor  
 */
void uart_send_float(uart_label_t label, float value){
    printf("<%s=%.2f>\n", label_to_str(label), value);
}