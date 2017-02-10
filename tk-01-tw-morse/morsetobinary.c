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

    char a[255] = "";

    // Converting input into raw string format
 	for(int i=0; i <strlen(input); i++) {

 		int currentChar = (int) input[i];

        // If current character is space
 		if(currentChar == 32) {
 			strcat(a, "0");
 		}

        // If current character is a dash
 		else if (currentChar == 45){
 			strcat(a, "111");
 		}

        // If current character is a point
 		else if (currentChar == 46) {
 			strcat(a, "1");
 		}

        // If current character is a per sign
 		else if (currentChar == 47) {
 			strcat(a, "000");

 		}

        // If current character is a horizontal tab
 		else if (currentChar == 9) {
 			strcat(a, "0000000");
 		}
 	}

    // Initial variables before conversion from raw string to binary
    int stepSize = sizeof(char)*8;
 	int wordLength = strlen(a);
 	int numberOfFullBytes = wordLength / 8;
 	int remainingBits = wordLength%8;
 	char currentByte = 0;
 	char lastByte = 0;

    // Main conversion mechanics
    int currentRound = 0;

 	for(int i=0; i < (wordLength-remainingBits); i += stepSize) {

        currentByte = 0;
 		currentByte = (int) (a[i] - '0') << 7 | (int) (a[i+1] - '0')  << 6 |
 				      (int) (a[i+2] - '0')  << 5 | (int) (a[i+3] - '0')  << 4 |
 				      (int) (a[i+4] - '0')  << 3 | (int) (a[i+5] - '0')  << 2 |
 				      (int) (a[i+6] - '0')  << 1 | (int) (a[i+7] - '0')  << 0;

 		output[currentRound] = currentByte;


        // Next byte size step
 		if (i%stepSize == 0) {
 			currentRound += 1;
 		}

        // Reaching last not full byte
 		if (currentRound == numberOfFullBytes) {
 			for(int b=0; b < remainingBits; b++) {
 				lastByte |= (int) (a[(wordLength-remainingBits) + b] - '0') << ( 7 - b);
 			}
 			output[currentRound] = lastByte;
 		}
 	}
 return strlen(a);
 }
