/* Exercise: Factorial of a number 
 * Write a program that compute the factorial of a positive integer 'n', read from the keyboard.
 * 
 * Author: Hermes Rojas Sancho
 * 
 * Concept practiced:
 * - Accumulation pattern using a loop
 * - Basic input handling
 * - Mathematical definition: 0! = 1
 *
 * Note:
 * - Uses int, so results overflow for relatively small values (e.g., > 12).
*/

#include <stdio.h>

int main(void) {
	int number = 0;
	int factorial = 1;
	
	printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1) {
		printf("Invalid input.\n");
		return 1;
	}
    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
	
	for(int i = 1; i <= number; i++) {
		factorial = factorial * i;
	}
	
	printf("\n");
	printf("Result of the factorial: %d\n", factorial);
	return 0;
}
