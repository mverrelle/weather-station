#include "measurement.h"
#include <time.h>


/**
 * @brief   Get current time since start in ms
 * @return  current time since start in ms
 */
static uint64_t get_timestamp_ms(void) {
    struct timespec ts;
    clock_gettime(&ts, TIME_UTC);
    return (uint64_t)(ts.tv_sec * 1000ULL + ts.tv_nsec / 1000000ULL);
}


/**
 * @brief   Create a measurement with current timestamp, label and value
 * @param   label           sensor label
 * @param   value           sensor value
 * @return  measurement_t   new measurement
 */
measurement_t measurement_create(uart_label_t label, float value){
    measurement_t measurement;
    measurement.label = label;
    measurement.value = value;
    measurement.timestamp_ms = get_timestamp_ms();
    return measurement;
}