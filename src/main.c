#include <stdio.h>
#include "sensors/sensor_temp.h"
#include "comm/uart_sim.h"

int main(void) {
    printf("Weather Station Simulation Start\n");

    // simulate 10 sensor readings
    for (int i = 0; i < 10; i++) {
        float temp = sensor_temp_read();
        uart_send_float(UART_LABEL_TEMP, temp);
    }

    return 0;
}