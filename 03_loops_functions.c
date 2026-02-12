/*
 * Examples:
 * Using loops, functions
 * 
 * Author: Hermes Rojas Sancho
 */

#include <stdio.h>

int main(void)
{	
	// ===============================
	// LOOPS
	// ===============================
	
	// -------------------------------
	// For loop example
	// -------------------------------
	// Guide challenge solution
	// - Write a loop that print the numbers from 1 to 10 in ascendant order
	for (int number = 1; number <= 10; number++) { // (initialization; condition; update[increment/decrement])
		printf("%d - ", number);
	}
	printf("\n");
	
	// -------------------------------
	// While loop example
	// -------------------------------
	// Guide challenge solution
	// - Create a while loop that prints the numbers from 1 to 10 in terminal
	int number = 1;
	
	while (number <= 10) { //(condition)
		printf("%d - ", number);
		number++;
	}
	printf("\n");
	
	return 0;
}
