/* Exercise: Conditional Structures
 * 
 * Make a program that reads three different positive integers and prints the largest and smallest value of them.
 * Try to make the program perform the fewest possible comparisons between the integers.
 * Assumes three different positive integers as input.
 * 
 * Author: Hermes Rojas Sancho
*/ 

#include <stdio.h>

int main (void) {
	int firstNumber, secondNumber, thirdNumber;
	int smallest, largest;
	
	printf("Enter the first number to compare: ");
	// Validate that an integer was successfully read from input
	if (scanf("%d", &firstNumber) != 1) {
		printf("Error: invalid number input.\n");
		return 1; // Exit program with error status
	}
	
	printf("Enter the second number to compare: ");
	if (scanf("%d", &secondNumber) != 1) {
		printf("Error: invalid number input.\n");
		return 1; // Exit program with error status
	}
	
	printf("Enter the third number to compare: ");
	if (scanf("%d", &thirdNumber) != 1) {
		printf("Error: invalid number input.\n");
		return 1; // Exit program with error status
	}
	
	// Compare first two numbers to establish initial min and max
	if (firstNumber > secondNumber) {
		largest = firstNumber;
		smallest = secondNumber;
	} else {
		largest = secondNumber;
		smallest = firstNumber;
	}
	
	// Compare third number only against current bounds (min/max)
	// This achieves the minimum number of comparisons (3 total)
	if (thirdNumber > largest) {
		largest = thirdNumber;
	}
	if (thirdNumber < smallest) {
		smallest = thirdNumber;
	}
	
	printf("\n\nThe smallest value is: %d and the largest is: %d\n", smallest, largest);
	
	return 0;
}
