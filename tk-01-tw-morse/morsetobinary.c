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


int MorseToBinary(char input[], char *output[]) {
    int i;
    for (i = 0; input[i] != '\0'; i++){
    	int x = (int) input[i];
    	if (x == 46) {
    		strcat(output, "1");
    	}else if (x == 45) {
    		strcat(output, "111");
    	}else if (x == 32) {
    		strcat(output, "0");
    	}else if (x == 47) {
    		strcat(output, "000");
    	}else if (x == 9) {
    		strcat(output, "0000000");
    	}
    }
    int size = strlen(output) + 8 - strlen(output)%8;
    char *nums = output;


//    char nulls ='0'*(8 - strlen(output)%8);
//    strcat(nums, nulls);
//    int j;
//    output[0] = '\0';
//    int e;
//    for (j=0; j<strlen(nums); j+=8){
//    	int num = 0;
//    	for (e = j; e<j+8;e++){
//    		num = (num+nums[e])*2;
//    	}
//    	output[j/8] =  num/2;
//    }

    return strlen(output)*8;
}
