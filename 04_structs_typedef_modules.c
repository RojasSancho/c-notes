/*
 * Examples of C language:
 * Structs (typedef) and modules
 * 
 * Author: Hermes Rojas Sancho
 */

#include <stdio.h>
#include <string.h> // strcpy()

// ===============================
// STRUCTS
// ===============================
// Collection of related variables under the same struct name
// Each struct can have many related properties (variables)
// Put a ";" at the end of every struct definition  

// -------------------------------                                   
// Guide challenge solution
// - Create a struct called "Car" that contains properties like brand, model and year. 
// - Then, initialize a couple of these structs.
// -------------------------------
// typedef: Creates an alias (alternative name) for a data type that already exists
// In this case, typedef is used to avoid having to write "struct" for each new instance

typedef struct Car { // data type -> the entire structure
	char brand[50];    
	char model[50];
	int year;
} Car;               // alias -> Car

// Auxiliary function to print car data
void print_data(const Car *car){ // argument is given using a pointer ("const" avoid accidental modifications on data)
	// operator "->": Used to access struct members through a pointer
	printf("Brand: %s | Model: %s | Year: %d\n", car->brand, car->model, car->year);
}

int main(void)
{	
	// -------------------------------
	// Initialization of each variable in the struct
	// -------------------------------
	// strcpy is required because arrays cannot be assigned after declaration.
	// The struct has already been created, so we must copy the strings into the arrays.
	Car miguelCar;
	strcpy(miguelCar.brand, "Nissan"); 
	strcpy(miguelCar.model, "Sentra B12");
	miguelCar.year = 1995;
	
	// -------------------------------
	// Direct initialization
	// -------------------------------
	// The struct is initialized at the moment of declaration
	Car dreamCar = {"Honda", "Civic", 2008};
	
	print_data(&miguelCar);
	print_data(&dreamCar);
	
	return 0;
}
