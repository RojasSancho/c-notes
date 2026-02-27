/* Exercise: Sort a one-dimensional array of 10 integers in ascending order using a function.
 * 
 * Objective:
 * Practice passing arrays to functions and implementing Selection Sort.
 * 
 * Author: Hermes Rojas Sancho
*/

#include <stdio.h>

/* Prints all elements of the array.
 * The array is marked const because this function must not modify data.
 */
void print_array(const int array[], size_t size) {
	for(size_t i = 0; i < size; i++){
		printf("%d", array[i]);
		
		if(i < size - 1) {
			printf(" - ");
		}
	}
	printf("\n");
}

/* Selection Sort (ascending order)
 *
 * Idea:
 * - For each position i, find the smallest value in the remaining array.
 * - Swap it into position i.
 *
 * Important concept:
 * When passed to a function, the array decays to a pointer to its first element.
 * The function operates on the same memory as main.
 */
void sort(int array[], size_t size) {
	int aux;
	
	for(size_t i = 0; i < size - 1; i++) {
		size_t smaller = i;
		
		/* Search for the smallest element in the unsorted part */
		for(size_t j = i + 1; j < size; j++) {
			if(array[j] < array[smaller]) {
				smaller = j;
			}
		}
		
		/* Swap only if a smaller element was found */
		if(smaller != i) {
			aux = array[i];
			array[i] = array[smaller];
			array[smaller] = aux;
		}
	}
} 

int main(void) {
	
	int array[10] = {8, 2, 9, 5, 7, 1, 10, 4, 3, 6};
	
	/* sizeof(array) returns the total number of bytes occupied by the array.
	   sizeof(array[0]) returns the number of bytes of one element.

	   Dividing them gives the number of elements stored in the array.

	   This works only when the array size is known at compile time
	   (e.g., int array[10]). In this context, the array size is part
	   of the type, so sizeof can determine the total memory used.

	   This avoids hardcoding the length. If the array size changes,
	   the computed element count updates automatically. */
	size_t size = sizeof(array) / sizeof(array[0]);
	
	printf("Disordered array: \n");
	print_array(array, size);
	
	sort(array, size);
	
	printf("Sorted array: \n");
	print_array(array, size);
	
	return 0;
}

/* Key Concepts:
 * 1. Arrays decay to a pointer to their first element when passed to functions.
 * 2. Functions operate on the same memory as main.
 * 3. size_t is the correct type for sizes and indexes.
 * 4. sizeof(array) / sizeof(array[0]) gives element count.
 * 5. Selection Sort repeatedly selects the smallest remaining element.
 * 6. The algorithm sorts in-place (no extra memory needed).
 * 7. const in parameters protects data from modification.
 * 8. sizeof cannot determine array length inside functions because arrays decay to pointers.
 */
