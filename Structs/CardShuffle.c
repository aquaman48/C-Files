#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//define new data type
typedef struct deck {
	char type[10];
	char used;
	int value;
} aDeck; //end of new data type

//function prototype
void shuffle(aDeck*);

int main()
{
	int x, y;
	aDeck myDeck[52];
	srand(time(NULL));
	//initialize structure array
	for (x = 0; x < 3; x++) {
		for (y = 0; y < 13; y++) {
			switch (x) {
			case 0:
				strcpy_s(myDeck[y].type, 10, "Diamonds");
				myDeck[y].value = y;
				myDeck[y].used = 'n';
				break;
			case 1:
				strcpy_s(myDeck[y + 13].type, 10, "Clubs");
				myDeck[y + 13].value = y;
				myDeck[y + 13].used = 'n';
				break;
			case 2:
				strcpy_s(myDeck[y + 26].type, 10, "Hearts");
				myDeck[y + 26].value = y;
				myDeck[y + 26].used = 'n';
				break;
			case 3:
				strcpy_s(myDeck[y + 39].type, 10, "Spades");
				myDeck[y + 39].value = y;
				myDeck[y + 39].used = 'n';
				break;
			}//end of switch 
		}//end of inner loop

	}//end of outer loop

	shuffle(myDeck);
	return 0;
}//end of main function

void shuffle(aDeck* thisDeck)
{
	int x;
	int iRnd;
	int found = 0;
	system("CLS");

	printf("\nYour five cards are: \n\n");
	while (found < 5) {
		iRnd = rand() % 51;
		if (thisDeck[iRnd].used == 'n'){
			switch (thisDeck[iRnd].value) {
			case 12:
				printf("Ace of %s\n", thisDeck[iRnd].type);
				break;
			case 11:
				printf("King of %s\n", thisDeck[iRnd].type);
				break;
			case 10:
				printf("Queen of %s\n", thisDeck[iRnd].type);
				break;
			case 9:
				printf("Jack of %s\n", thisDeck[iRnd].type);
				break;
			default:
				printf("%d of ", thisDeck[iRnd].value + 2);
				printf("%s\n", thisDeck[iRnd].type);
				break;
		}//end of switch
			thisDeck[iRnd].used = 'y';
			found = found + 1;
		}//end if
	}//end of while loop
}//end of shuffle function