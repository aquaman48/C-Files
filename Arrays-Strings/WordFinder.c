//simple word finder/memory game

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//function prototypes
void checkAnswer(char*, char[]);

int main()
{
	char* strGame[5] = { "ADELANGUAGEFERVZOPIBMOU",
					"ZBPOINTERSKLMOOPMNOCOT",
					"PODSTRINGGDIWHIEEICERLS",
					"YVCPROGRAMMERWQKNULTHMD",
					"UKUNIXFIMWIZEQZINPUTEX" };
	char answer[80] = { 0 };
	int display = 0;
	int x;
	int startTime = 0;
	system("CLS");

	printf("Word Find\n\n");
	startTime = time(NULL);

	for (x = 0; x < 5; x++) {
		/*Displays text for just a few seconds*/
		while (startTime + 3 > time(NULL)) {
			if (display == 0) {
				printf("\nFind a word in: \n\n");
				printf("%s\n\n", strGame[x]);
				display = 1;
			}
		}//end of while loop
		system("CLS");
		printf("Enter the word found: ");

		gets(answer);
		checkAnswer(strGame[x], answer);

		display = 0;
		startTime = time(NULL);
	}//end of for loop
	return 0;
}//end of main function

void checkAnswer(char* string1, char string2[])
{
	int x;
	/*Takes answer and converts to uppercase to perform comparison*/
	for (x = 0; x <= strlen(string2); x++)
		string2[x] = toupper(string2[x]);
	if (strstr(string1, string2) != 0 && string2[0] != 0)
		printf("\nGreat Job!!!\n");
	else
		printf("\nSorry, Incorrect word was input by user.");
}//end of check answer function 
