#include <stdio.h>
#include <string.h>

int main()
{
	typedef struct player {
		char name[15];
		float score;
	} p;

	p aPlayer = { 0, 0 };//create an instance of the struct
	p* ptrPlayer; //create a pointer to the structure type
	ptrPlayer = &aPlayer; //assigns the address to pointer of structure type

	strcpy_s(ptrPlayer->name, 15, "Pinball Wizard"); //access through indirection
	ptrPlayer->score = 9900990099.99;

	printf("\nPlayer: %s\n", ptrPlayer->name);
	printf("Score: %.0f\n", ptrPlayer->score);
	
	return 0;

}