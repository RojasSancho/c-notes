/* Exercise: Prime numbers using functions
 * Validate if two different numbers are prime using a function.
 * 
 * Author: Hermes Rojas Sancho
*/

#include <stdio.h>

/* Determines if a number is prime.
 *
 * Key learning:
 * - We only test divisors up to sqrt(number).
 *   Reason: if number = a × b and both a and b were greater than sqrt(number),
 *   then a × b would be greater than number (impossible).
 *   Therefore, at least one factor must be <= sqrt(number).
 *
 * Efficiency improvement:
 * - This reduces time complexity from O(n) to O(sqrt(n)).
 *
 * Design decision:
 * - Returns 1 (true) if prime, 0 (false) otherwise.
 * - Using return early simplifies logic and improves readability.
 */
int isPrime(int number) {
	if(number <= 1) {
		return 0;		// By definition, primes are integers greater than 1
	}
	
	for(int i = 2; i * i <= number; i++){
		if((number % i) == 0) {
			return 0;	// Found a divisor → not prime
		}
	}
	
	return 1;			// No divisors found → prime
}

int main(void) {
	int firstNumber, secondNumber;
	
	printf("Enter the first number to validate if it is prime: ");
	
	/* Input validation pattern:
	 * scanf returns the number of successfully read items.
	 * If it is not 1, the input was not a valid integer.
	 */
	if (scanf("%d", &firstNumber) != 1) {
		printf("Invalid input.\n");
		return 1;
	}
	
	/* Function reuse:
	 * The same function is used without modifying its internal logic.
	 * This demonstrates separation of concerns.
	 */
	if(isPrime(firstNumber)) {
		printf("The number %d is prime.\n", firstNumber);
	} else {
		printf("The number %d is NOT prime.\n", firstNumber);
	}
	
	printf("\nEnter the second number to validate if it is prime: ");
	if (scanf("%d", &secondNumber) != 1) {
		printf("Invalid input.\n");
		return 1;
	}
	
	if(isPrime(secondNumber)) {
		printf("The number %d is prime.\n", secondNumber);
	} else {
		printf("The number %d is NOT prime.\n", secondNumber);
	}
	
	return 0;
}
