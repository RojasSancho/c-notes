/*
 * 01_hello_variables_constants_arrays.c
 * 
 * Copyright 2026 Hermes <hermes@PC-HERMES>
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	// This is a comment
	// Every C comment must be inside this block to be ignored
	// The program return a 0 that means "Success!"
	
	// ===============================
	// HELLO WORLD EXAMPLE
	// ===============================
	// printf is used for print text in the terminal
	printf("Hello Hermes!\n");
	
	// ===============================
	// USING VARIABLES EXAMPLE
	// ===============================
	char canton[15] = "Montes de Oca";
	// An complete array variable cannot be reasignated with "=" operator
	// Use strcpy (from the string.h library) to copy a new value
	strcpy(canton, "Goicoechea");
	int population = 132104;
	float area = 31.5;
	
	// %s → placeholder (marcador de posicion) for a string (text)
	// %c → placeholder for a single character 
	// %d → placeholder for an integer number
	// %f → placeholder for a float or double
	
	// %x → indicates to replace with a hexadecimal number
	// %p → indicates to replace with a pointer (memory address)
	printf("Canton: %s, Population: %d, Area: %.2f\n", canton, population, area);
	
	// ===============================
	// USING LISTS (ARRAYS) EXAMPLE
	// ===============================
	// Strings in C are handled (manejados) using pointers (*)
	// Array of string pointers → each points to the first character of a string (month names in this example)
	char *months[] = {
		"January", "February", "March", "April", "May", "June", 
		"July", "August", "September", "October", "November", "December"
		};
		
	printf("%s\n", months[2]);
	
	// ===============================
	// USING CONSTANTS EXAMPLE
	// ===============================
	// Read-only values (const): these can't be changed or modified during execution
	const double piNumber = 3.14159265359;
	const char *greeting = "Hello World!";
	
	// Uncommenting the next line will cause a compilation error
	// strcpy(greeting, "Hello Planet!");
	
	// (You can't modify a constant value!!!)
	
	printf("Pi number: %.11f, Greeting: %s\n", piNumber, greeting);
	
	return 0;
}
