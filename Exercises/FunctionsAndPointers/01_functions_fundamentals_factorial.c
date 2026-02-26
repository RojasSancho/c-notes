/* Exercise: Factorial using functions
 * Compute the factorial of two numbers using a reusable function.
 * 
 * Definition:
 * n! = 1 × 2 × 3 × ... × n   for n >= 0
 * 0! = 1
 *
 * Implementation notes:
 * - Uses an iterative approach with accumulation.
 * - Uses type int, which safely supports values up to 12!.
 *   13! exceeds the range of 32-bit signed integers (overflow).
 * 
 * Author: Hermes Rojas Sancho
*/

#include <stdio.h>

#define MAX_SAFE_FACTORIAL 12

/* Computes n! for n >= 0.
 * Precondition: 0 <= n <= MAX_SAFE_FACTORIAL (validated by caller).
 * Returns the factorial of n.
 * 
 * Note: when number == 0, the loop does not run and result remains 1.
 */
int factorial(int number) {
	int result = 1;
	for(int i = 1; i <= number; i++) {
		result = result * i;
	}
	return result;
}

int main(void) {
	int firstNumber, secondNumber;
	
	printf("Enter the first number to calculate its factorial: ");
	if (scanf("%d", &firstNumber) != 1) {
		printf("\nInvalid input.\n");
		return 1;
	}
	
	printf("Enter the second number to calculate its factorial: ");
	if (scanf("%d", &secondNumber) != 1) {
		printf("\nInvalid input.\n");
		return 1;
	}
	
	if (firstNumber < 0 || secondNumber < 0) {
        printf("\nFactorial is not defined for negative numbers.\n");
        return 1;
    }
    
    if (firstNumber > MAX_SAFE_FACTORIAL || secondNumber > MAX_SAFE_FACTORIAL) {
        printf("\nNumber too large. Max supported value is %d.\n", MAX_SAFE_FACTORIAL);
        return 1;
    }
	
	int factorialFirstNumber = factorial(firstNumber);
	int factorialSecondNumber = factorial(secondNumber);
	
	printf("\nResult of the factorial of the first number: %d\n", factorialFirstNumber);
	printf("Result of the factorial of the second number: %d\n", factorialSecondNumber);

	return 0;
}
