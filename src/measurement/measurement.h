#ifndef MEASUREMENT_H
#define MEASUREMENT_H

#include "comm/uart_sim.h"
#include <stdint.h>

/**
 * @brief   This structure represents a sensor measurement with all its characteristics
 */
typedef struct {
    uart_label_t    label; 
    float           value;
    uint64_t        timestamp_ms;
} measurement_t;

/**
 * @brief   Create a measurement with current timestamp, label and value
 * @param   label           sensor label
 * @param   value           sensor value
 * @return  measurement_t   new measurement
 */
measurement_t measurement_create(uart_label_t label, float value);

#endif // MESUREMENT_H