#include <stdio.h>
#include "sensors/sensor_temp.h"
#include "comm/uart_sim.h"
#include "measurement/measurement.h"

int main(void) {
    printf("Weather Station Simulation Start\n");

    // simulate 10 sensor readings
    for (int i = 0; i < 10; i++) {
        float temp = sensor_temp_read();
        measurement_t m = measurement_create(UART_LABEL_TEMP, temp);
        printf("[%d] value=%.2f timestamp=%llu ms\n", m.label, m.value, (unsigned long long)m.timestamp_ms);
        uart_send_float(m.label, m.value);
    }

    return 0;
}