/*
 * 02_c
 * 
 * Copyright 2026 Hermes <hermes@PC-HERMES>
 */

#include <stdio.h>

int main(void)
{
	// ===============================
	// ARITHMETIC OPERATORS EXAMPLE
	// ===============================
	printf("%d\n", 10 + 5);	// addition = 15
	printf("%d\n", 10 - 5);	// subtraction = 5
	printf("%d\n", 6 * 3);	// multiplication = 18
	printf("%d\n", 6 / 3);	// division = 2
	
	// Guide challenge solution
	const double PI = 3.14159;
	int circle_radio = 5;
	double area = PI * (circle_radio * circle_radio);
	
	printf("The total area of the circle is: %.5f\n", area); // area = 78.53975 
	
	// ===============================
	// COMPARATIVE OPERATORS EXAMPLE
	// ===============================
	//Guide challenge solution
	int number_a = 4;
	int number_b = 2;
	
	if (number_a > number_b) {
		printf("The number_a (%d) is greater than the number_b (%d)\n", number_a, number_b);
	} else if (number_a < number_b) {
		printf("The number_a (%d) is smaller than the number_b (%d)\n", number_a, number_b);
	} else {
		printf("The number_a (%d) is the same as the number_b (%d)\n", number_a, number_b);
	}
	
	// ===============================
	// LOGIC OPERATORS EXAMPLE
	// ===============================
	//Guide challenge solution
	int x = 2;
	int y = -3;
	printf("%d\n", (x > 0) && (y < 0)); 
	// &&: just if both expressions are true the operator AND returns a 1 (True) 
	// ||: the operator OR returns a 1 (True) with only one true expression
	
	// ===============================
	// CONDITIONALS EXAMPLE
	// ===============================
	// IF-ELSE (Unique condition)
	//Guide challenge solution
	int a = 17;
	
	if (a % 2 == 0) {
		printf("The number is even (par)");
	} else {
		printf("The number is odd (impar)");
	}
	
	// ELSE IF (Multiple conditions)
	
	
	return 0;
}
