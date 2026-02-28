/* Exercise: Swap the values of two variables using pointers
 *
 * Objective:
 * Understand how to use pointers (*) and addresses (&) in C to modify
 * variables directly from a function (pass by reference), avoiding copies.
 * 
 * Author: Hermes Rojas Sancho
*/

#include <stdio.h>

/* Function that swaps the values of two int variables using pointers.
 *
 * *firstNumber and *secondNumber are dereferenced pointers.
 * Dereferencing (*) allows modifying the value stored at the memory address.
 * This is key to pass-by-reference behavior in C.
 */
void swap(int *firstNumber, int *secondNumber) {
    int aux;   // Temporary variable to store a value during the swap

    aux = *firstNumber;           // Store value pointed by firstNumber
    *firstNumber = *secondNumber; // Copy value pointed by secondNumber into firstNumber
    *secondNumber = aux;          // Assign the stored value into secondNumber
}

int main(void) {
    int number1 = 6, number2 = 12;

    printf("Initial values\nFirst value: %d | Second value: %d\n\n", number1, number2);

    // First swap: modifies the original variables
    // Pass the memory addresses using & so the function works by reference
    swap(&number1, &number2);
    printf("After the swap function:\nFirst value: %d | Second value: %d\n\n", number1, number2);

    // Second swap: demonstrates that the function always operates on the originals
    swap(&number1, &number2);
    printf("After ANOTHER swap function:\nFirst value: %d | Second value: %d\n", number1, number2);

    return 0;
}

/* Key Concepts Learned:
 * 1. Pass by reference: using & to pass memory addresses to functions.
 * 2. Dereferencing pointers (*): access and modify the actual value.
 * 3. Avoiding unnecessary copies: the function changes the original variables.
 * 4. Temporary storage: using an auxiliary variable during swap operations.
 * 5. Repeated operations: the same function can operate multiple times on the same variables.
 */
