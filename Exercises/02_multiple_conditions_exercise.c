/* Exercise: Multiple Conditions 
 * 
 * Make a program that reads three different positive integers (representing hours, minutes and seconds) and returns the time that will be one second from now.
 * Validate that it's a possible time.
 * 
 * Author: Hermes Rojas Sancho
*/ 

#include <stdio.h>

int integerInput (int *value) {
	if (scanf("%d", value) != 1) {
		// Use stderr for error reporting so it can be handled or redirected independently from stdout
		fprintf(stderr, "\nError: invalid number input.\n");
		return 0; // Failure status
	}
	return 1; // Success status
}

int main(void) {
	int hour, min, sec;
	
	printf("Enter the value for the hours: ");
	if (!integerInput(&hour)) { // Checks success status; value is written through the pointer
		return 1; // Exit program with error status
	}
	
	printf("Enter the value for the minutes: ");
	if (!integerInput(&min)) { // Checks success status; value is written through the pointer
		return 1; // Exit program with error status
	}
	
	printf("Enter the value for the seconds: ");
	if (!integerInput(&sec)) { // Checks success status; value is written through the pointer
		return 1; // Exit program with error status
	}
	
	int validTime = (hour >= 0 && hour <= 23) && 
	                (min >= 0 && min <= 59) && 
	                (sec >= 0 && sec <= 59);
	
	if (!validTime) {
		// Use stderr for error reporting so it can be handled or redirected independently from stdout
		fprintf(stderr, "\nError: values must represent a valid 24-hour time.\n");
		return 1;
	}
	
	sec++;
	if (sec == 60) {
		sec = 0;
		min++;
	}
	
	if (min == 60) {
		min = 0;
		hour++;
	}
	
	if (hour == 24) {
		hour = 0;
	}
	
	printf("\nTIME\nHour: %02d, minutes: %02d, seconds: %02d\n", hour, min, sec);
	
	return 0;
}
