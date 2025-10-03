#ifndef UART_SIM_H
#define UART_SIM_H

/**
 * @brief   Enumeration of UART labels to identify sensors
 */
typedef enum {
    UART_LABEL_TEMP
} uart_label_t;

/**
 * @brief   Simulate an UART link sending float value
 * @param   label   uart_label_t to identify sensor
 * @param   value   value mesured by the sensor  
 */
void uart_send_float(uart_label_t label, float value);

#endif //UART_SIM_H