#include <stdio.h>
#include <string.h>
#include <ctype.h>

//constant for the MAX value of 100. Will never change.
//#define MAX 100

//Function prototype
void makeBigger(char*, int);

//Main function definition
int main()
{
	// to store the name with the const
	//char name[MAX];
	//array to store users name, up to 20 chars. 
	char name[20];

	printf("Enter the name: ");
	scanf_s(" %19s", name, 20);

	// Calls the function to make the string all CAPS
	makeBigger(name, strlen(name));

	printf("\nYour name contains %d characters.\n", strlen(name));
	printf("Your name in uppercase: %s\n", name);
	return 0;
}

// Changes case of string to all CAPS (Funtion definition for makeBigger)
void makeBigger(char* name, int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		name[i] = toupper(name[i]);
	}
}
