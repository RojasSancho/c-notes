/* Exercise: Fill a one-dimensional array (vector) with user input
 *
 * Objective:
 * Practice using one-dimensional arrays (vectors) in C, accessing
 * elements via indices, handling user input with scanf, and
 * understanding the relationship between arrays and pointers.
 * 
 * Author: Hermes Rojas Sancho
*/

#include <stdio.h>

int main(void) {
	// Declares a one-dimensional array (vector) of 10 integers
	int vector[10]; 
	
	// Fill the array with user input using a for loop
	// Access each element with its index
	for(int i = 0; i < 10; i++) {
		printf("Enter a value for the one-dimensional array at position %d: ", i);
		
		// Use &vector[i] to provide the memory address for scanf
		// This shows the connection between arrays, pointers, and memory addresses
		if(scanf("%d", &vector[i]) != 1) {
			printf("Invalid input.\n");
			return 1;
		}
	}
	
	// Display the values stored in the array
	printf("\nValues in the one-dimensional array: \n");
	
	for(int i = 0; i < 10; i++) {
		printf("%d", vector[i]);
		
		// Print a separator "-" between elements for readability,
		// but avoid printing it after the last element
		if(i < 10 - 1){
			printf(" - ");
		}
	}
	
	printf("\n");
	
	return 0;
}

/* Key Concepts:
 * 1. Arrays in C are contiguous blocks of memory. Each element
 *    can be accessed using an index starting from 0.
 * 2. The & operator is used with scanf to pass the memory address
 *    where the input should be stored.
 * 3. Using a for loop to traverse arrays is a standard pattern.
 * 4. When arrays are passed to functions, they decay into pointers.
 *    This demonstrates how array indexing is related to pointer access,
 *    which is essential for understanding pass-by-reference in C.
 * 5. Formatting output improves readability and demonstrates control
 *    of program flow.
 * 6. Proper input validation (checking scanf) is an important practice
 *    for writing robust C programs.
 */
