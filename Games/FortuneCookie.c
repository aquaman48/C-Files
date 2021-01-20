#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int iRandNum = 0;
	srand(time(NULL));
	iRandNum = (rand() % 4) + 1;

	printf("\n\t\t\tFortune Cookie!!!!!\n");
	//begins switch statement with iRandNum arg. 
	switch (iRandNum)
	{
	case 1:
		printf("\nYou are going to hear some amazing news! \n");
		break;
	case 2:
		printf("\nYou are going through some tough times, but they will pass.\n");
		break;
	case 3:
		printf("\nYou will come across a big sum of money!\n");
		break;
	case 4:
		printf("\nStay close to your phone and be ready for some good news!\n");
		break;
	}//ends the switch statement

	printf("\nHold onto your seat because your lucky lotto numbers are:\n ");
	printf("\n%d\n", (rand() % 49) + 1);
	printf("\n%d\n", (rand() % 49) + 1);
	printf("\n%d\n", (rand() % 49) + 1);
	printf("\n%d\n", (rand() % 49) + 1);
	printf("\n%d\n", (rand() % 49) + 1);
	printf("\n%d\n", (rand() % 49) + 1);
	return 0;
}