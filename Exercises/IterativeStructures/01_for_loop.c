/* Exercise: For Loop
 * Computes the sum of all even numbers from 2 to 2000 using a for loop.
 * 
 * Author: Hermes Rojas Sancho
*/

#include <stdio.h>

int main(void) {
	int sum = 0; // 4-byte integer (32-bit), range: -2,147,483,648 to 2,147,483,647
	// sum is stored in a 32-bit int, which can hold up to 2,147,483,647

	for (int i = 2; i <= 2000; i += 2) {
		sum += i;
	}
	
	printf("Sum of even numbers from 2 to 2000: %d\n", sum);
	
	// sizeof returns size_t, so %zu is the correct format specifier
	printf("\nSize of an integer in bytes: %zu\n", sizeof(int)); 
	
	return 0;
}
