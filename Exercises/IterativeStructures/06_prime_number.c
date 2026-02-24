/* Exercise: Check if a number is prime
 * Write a program that validates if a number is prime.
 * 
 * Idea:
 * A prime number is divisible only by 1 and itself.
 * We test divisibility by all integers from 2 up to number - 1.
 * If any divides evenly, the number is not prime.
 * If no divisor is found, the number is prime.
 * 
 * Author: Hermes Rojas Sancho
*/

#include <stdio.h>

int main(void) {
	int number;
	int divider = 2;
	int isPrime = 1;

	printf("Enter a number to validate its primality: ");
	scanf("%d", &number);
	
	// Note:
	// Prime numbers are integers greater than 1.
	if (number <= 1) {
		isPrime = 0;
	}
	
	while(divider < number) {
		if((number % divider) == 0) {
			isPrime = 0;
			 break; // Ends the loop when a divisor is found
		}
		divider++;
	}
	
	if (isPrime == 1) {
		printf("The entered number is prime.\n");
	} else {
		printf("The entered number is NOT prime.\n");
	}
	
	return 0;
}
