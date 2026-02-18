#include <stdio.h>

int main(void) {
	float number1 = 3.14;
	int number2;
	
	printf("Introduce an integer number: ");
	/*
	scanf() needs a memory address to know where to write the user input 
	We pass the variable's address using the ampersand (&)
	
	For strings (char arrays), we don't use & because the array name
	already represents the address of its first element
	*/
	scanf ("%d", &number2); 
	printf("The introduced int number is : %d\n\n", number2); 
	
	number1 = number1 * number2;
	
	printf("The product of the int number * PI number is: %f\n\n", number1);
}
