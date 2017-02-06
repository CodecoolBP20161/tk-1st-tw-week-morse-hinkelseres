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

	int magnitude = env->acc_x*env->acc_x+env->acc_y*env->acc_y+env->acc_z*env->acc_z;

    if (env->temp > 34) {
    	env->state = 2;
    	if (env->acc_x > 20 || env->acc_y > 20 || env->acc_z >20 || magnitude > 900) {
    		env->state = 3;
    		return;
    	}
    }
    else if (env->acc_x > 20 || env->acc_y > 20 || env->acc_z >20 || magnitude > 900) env->state = 1;
    else env->state = 0;

}
