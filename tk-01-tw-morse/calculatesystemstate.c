#include "selfprot.h"

/*
 * Function: CalculateSystemState
 * --------------------------------------------
 * calculate the system state based on environment data and
 * stores the calculated state in the caught data structure
 *
 * env: contains environment data and calculated state will be stored in it
 */
void CalculateSystemState(EnvironmentData *env) {
    // Rules:
    // - temp <= 34
    // -  acc_x <= 2
    // - acc_y <= 2
    // - acc_z <= 2
    // - magnitude of acceleration <= 3

    // printf("%d", *env.acc_x);
}
