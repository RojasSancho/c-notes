/* Example: Functions with one-dimensional arrays
 *
 * Objective:
 * Understand how arrays are passed to functions in C.
 * Functions receive the address of the first element,
 * so they operate on the original data (no copy).
 *
 * Author: Hermes Rojas Sancho
*/

#include <stdio.h>
#include <stdlib.h>   // exit()

/* exit(1)
 * Terminates the program immediately.
 * The value 1 signals an error to the operating system.
 */

/* Why size_t?
 * - Standard type for sizes and indexes.
 * - Returned by sizeof().
 * - Cannot be negative.
 * - Prevents mismatch between memory size and index type.
 */

/* Receives the address of the first element and the array size.
 * "int array[]" and "int *array" mean the same in parameters.
 * The function modifies the original array in memory.
 */
void input(int array[], size_t size) {
	for(size_t i = 0; i < size; i++) {
		printf("Enter value for position %zu: ", i);

		/* &array[i] is the address where scanf stores the value.
		   This writes directly into the original array. */
		if(scanf("%d", &array[i]) != 1) {
			printf("Invalid input.\n");
			exit(1);
		}
	}
	printf("\n");
}

/* Receives the same memory but marked as read-only.
 * const prevents accidental modification.
 */
void output(const int array[], size_t size) {
	for(size_t i = 0; i < size; i++){
		printf("%d", array[i]);

		if(i < size - 1) {
			printf(" - ");
		}
	}
	printf("\n");
}

int main(void) {

	int vector[2];

	/* When passing an array to a function:
	   - The array name decays to a pointer to element 0.
       - The function receives a copy of that pointer.
       - Both refer to the same memory.
       - The size must be provided explicitly. */
	input(vector, (size_t)2);
	output(vector, (size_t)2);

	return 0;
}

/* Key Concepts:
 * 1. Arrays store elements in contiguous memory.
 * 2. Passing an array to a function passes the address of element 0.
 * 3. The array is not copied; functions modify original data.
 * 4. The array size must be passed explicitly.
 * 5. size_t is the correct type for sizes and indexes.
 * 6. array[i] is equivalent to *(array + i).
 * 7. const in parameters prevents modification.
 * 8. The array name is not a pointer type, but it decays into one
 *    in most expressions (except sizeof and &array).
 */
