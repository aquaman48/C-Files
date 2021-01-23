#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int tossDice(int*);

int main()
{
	srand(time(NULL));
	int iRandNum = 0;
	int iDice[] = { 0 };

	system("CLS");
	printf("\n\t\t\t*_*_* DICE DICE BABY *_*_*\n\n");
	printf("\tHow many dice do you want to toss(1 - 6): ");
	scanf_s("%d", &iDice);
	printf("Ok, we will now toss %d dice", iDice);

	tossDice(iDice);
	printf("\nThe values of your dice are %d \n", iDice);

	return 0;

}

int tossDice(int dice[])
{
	int i;
	srand(time(NULL));
	for (i = 0; i < 6; i++)
		dice[i] = (rand() % 6) + 1;

}