#include "selfprot.h"

/*
 * Function: CreateEnvironmentData
 * --------------------------------------------
 * converts input data into structured form
 *
 * acc_x: acceleration in the X direction
 * acc_y: acceleration in the Y direction
 * acc_z: acceleration in the Z direction
 * temp: magnitude of the temperature
 */
EnvironmentData CreateEnvironmentData(float acc_x, float acc_y, float acc_z, signed int temp) {
    struct EnvironmentData environmentData;
    environmentData.acc_x = ((int)(acc_x * 100 + 5) / 10.0);
    environmentData.acc_y = ((int)(acc_y * 100 + 5) / 10.0);
    environmentData.acc_z = ((int)(acc_z * 100 + 5) / 10.0);
    environmentData.temp = temp;

    return environmentData;
}
