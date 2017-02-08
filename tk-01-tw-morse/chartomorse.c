#include "selfprot.h"

//rosszak meg a betett "/"-ek

/*
 * Function: CharToMorse
 * --------------------------------------------
 * convert characters/numbers to dots and dashes (morse code).
 * the function use the character-morse and number-morse maps
 * from the common header.
 *
 * input: the convertable string
 * output: converted morse string
 *
 * returns: the index of the last converted character of the input
 */
int CharToMorse(char input[], char *output) {
    int i;
    for (i = 0; input[i] != '\0'; i++){
        int x = (int) input[i];
        // Between 65 and 95 capital letter in the ASCII table
        if(65 <= x && x <= 90){
            strcat(output, CHAR_TO_MORSE_ALPHA[x-65]);
            if(input[i+1]!= '_'){
            	strcat(output, "/");
        // Between 48 and 57 digits between 0 and 9 in the ASCII table
        }else if(48 <= x && x<=57){
            strcat(output, CHAR_TO_MORSE_NUMBER[x-48]);
            if(input[i+1]!= '_'){
            	strcat(output, "/");
            }
        // If character is space, append with tab
        }else if(x == 32){
            strcat(output, "\t");
        }
    }
    return 1;
}
