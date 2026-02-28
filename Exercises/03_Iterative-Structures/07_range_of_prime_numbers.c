/* Exercise: Prime numbers between 2 and 2000
 * Print all prime numbers between 2 and 2000 on the screen.
 * 
 * Idea:
 * A number i is prime if it has no divisors other than 1 and itself.
 * To check this efficiently, we test divisors j where j * j <= i.
 * This reduces unnecessary checks beyond sqrt(i).
 *
 * Reason:
 * If i = a * b, at least one of the factors must be <= sqrt(i).
 * So if no divisor is found up to sqrt(i), the number is prime.
 * 
 * Author: Hermes Rojas Sancho
*/

#include <stdio.h>

int main(void) {
	int isPrime;
	
	// Iterate through numbers from 2 to 2000
	for(int i = 2; i <= 2000; i++) {
		isPrime = 1;  // Assume i is prime unless proven otherwise
		
		/* Check for divisors from 2 up to sqrt(i)
         * We avoid using sqrt() by checking j * j <= i.
         * If any divisor is found, i is not prime.
         */
		for(int j = 2; j * j <= i; j++) {
			if((i % j) == 0) {
				isPrime = 0;
				break;
			}
		}
		if(isPrime) {
			printf("%d ", i);
			
			if(i < 2000 - 1) {
				printf("- ");
			}
		}
		
	}
	
	printf("\n");
	
	return 0;
}
