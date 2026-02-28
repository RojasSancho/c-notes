/* Exercise: Do While Loop and how to use characters in C (char manipulation)
 * Make a loop that asks the user if they want to continue and stops until the user types an 's' letter.
 * 
 * Author: Hermes Rojas Sancho
*/

#include <stdio.h>

int main(void) {
	char line[100];
	char answer;
	
	/* 
     * Using fgets to read the line ensures that multiple characters or leftover input
     * do not interfere with the loop. Only the first character determines whether
     * the program continues.
     *
     * Note: fgets also captures the Enter key ('\n') when the user presses it.
     *       We ignore it by only using the first character of the line.
     */
	do {
		printf("\nDo you want to continue? Type 's' to stop: ");
		
		fgets(line, sizeof(line), stdin); 	// Reads the full line; only the first char determines continuation
        answer = line[0]; 					// Uses only the first character; any additional characters including Enter are ignored
	} while (answer != 's');
	
	printf("The program will stop.\n"); 	// Program ends when user types 's'
	return 0;
}
