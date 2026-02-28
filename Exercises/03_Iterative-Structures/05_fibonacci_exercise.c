/* Exercise: Fibonacci sequence
 * Write a program that prints the Fibonacci sequence up to the term 'n' entered by the user.
 *
 * Idea:
 * Each term is the sum of the two previous ones.
 * We keep track of two consecutive terms and update them in each iteration.
 * 
 * Precondition:
 * n must be >= 0 (number of terms to print)
 * 
 * Author: Hermes Rojas Sancho
*/

#include <stdio.h>

int main(void) {
	int n;
	int firstTerm, secondTerm, aux;
	firstTerm = 0;
	secondTerm = 1;
	
	printf("Enter the number of terms in the Fibonacci sequence you want to see: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		printf("%d", firstTerm);
		
		if (i < n - 1) {
			printf(" - ");
		}

		// Update terms:
		// newTerm = firstTerm + secondTerm
		// shift terms forward
		aux = firstTerm;
		firstTerm = firstTerm + secondTerm;
		secondTerm = aux;
	}
	
	printf("\n");
	
	return 0;
}
