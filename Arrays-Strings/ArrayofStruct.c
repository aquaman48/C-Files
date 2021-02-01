#include <stdio.h>
#include <string.h>

typedef struct scores {
	char cName[10];
	int score;
}s;

int main()
{
	s highScores[3];
	int x;

	//assign values to members
	strcpy_s(highScores[0].cName, 10, "Nick");
	highScores[0].score = 994135;
	strcpy_s(highScores[1].cName, 10, "Joel");
	highScores[1].score = 876244;
	strcpy_s(highScores[2].cName, 10, "Eduardo");
	highScores[2].score = 299;

	//prints the array we just created
	printf("\t\t*_*_*_* TOP 3 HIGH SCORES *_*_*_*\n");
	for (x = 0; x < 3; x++)
		printf("\n\t\t\t%s\t%d\n", highScores[x].cName, highScores[x].score);
	return 0;
}