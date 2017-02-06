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
    struct EnvironmentData* environmentData;
    environmentData->acc_x = acc_x;
    environmentData->acc_y = acc_y;
    environmentData->acc_z = acc_z;
    environmentData->temp = temp;

    // printf("\n");
    // printf("%d\n", acc_x);
    // printf("%d\n", environmentData.acc_x);

    return *environmentData;
}
