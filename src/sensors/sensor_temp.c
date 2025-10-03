#include "sensor_temp.h"
#include <stdlib.h>
#include <math.h>

static int t = 0; //time simulation for the simulated temperature

/**
 * @brief   This function returns a simulated temperature in °C
 * @return  sensor_temp the simulated temperature in °C
 */
float sensor_temp_read() {
    float sensor_temp = t*0.1;
    t++;
    return sensor_temp;
}