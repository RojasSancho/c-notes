/*
 * Examples of C language:
 * Loops and functions
 * 
 * Author: Hermes Rojas Sancho
 */

#include <stdio.h>

// ===============================
// FUNCTIONS
// ===============================
// Code block that can be reused in many parts of the entire code
// Functions can return a value

// Guide challenge solution
// - Write a function that takes two numbers as arguments and returns the greater
int greaterNumber (int firstNumber, int secondNumber) {
	if (firstNumber >= secondNumber) {
		return firstNumber;
	}
	return secondNumber;
	
}

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
	printf("\n\n");
	
	// ===============================
	// USING FUNCTION
	// ===============================
	int number1 = 1750;
	int number2 = 355;
	
	int greater = greaterNumber(number1, number2); // function call
	printf("The greater number is: %d\n", greater);
	
	return 0;
}
