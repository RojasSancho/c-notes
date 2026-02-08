/*
 * hello-world.c
 * 
 * Copyright 2026 Hermes <hermes@PC-HERMES>
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	// This is a comment
	// Every C code must be inside this block to be ignored
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
	// An complete array variable cannot be reasignated with = (use strcpy from string.h library)
	strcpy(canton, "Goicoechea");
	int population = 132104;
	float area = 31.5;
	
	// %s → indicates to replace with a string (text)
	// %c → indicates to replace with a single character 
	// %d → indicates to replace with an int number
	// %f → indicates to replace with a floating point number or double
	
	// %x → indicates to replace with a hexadecimal number
	// %p → indicates to replace with a pointer (memory address)
	printf("Canton: %s, Population: %d, Area: %.2f\n", canton, population, area);
	
	// ===============================
	// USING LISTS (ARRAYS) EXAMPLE
	// ===============================
	// Using strings needs to be indicated using * for pointers
	// Pointers to strings array → Each one pointing to the first character of each string (month name in this case)
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
