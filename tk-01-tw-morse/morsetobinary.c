#include "selfprot.h"


/*
 * Function: MorseToBinary
 * --------------------------------------------
 * converts morse string input bits
 *
 * input: the convertable morse string
 * output: morse in bits
 *
 * returns: the number of used bits for morse
 */


int MorseToBinary(char input[], char output[]) {
    int i;
    for (i = 0; input[i] != '\0'; i++){
    	if (input[i] == '.') strcat(output, "1");
    	else if (input[i] == '-') strcat(output, "111");
    	else if (input[i] == ' ') strcat(output, "0");
    	else if (input[i] == '/') strcat(output, "000");
    	else if (input[i] == "\t") strcat(output, "0000000");
    }
    return 1;
}
