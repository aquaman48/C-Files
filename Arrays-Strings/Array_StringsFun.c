#include <stdio.h>
#include <ctype.h>
#include <string.h>

int nameLength(char[]);

int main() {
	//int x;
	char aName[5] = { '\0' };
	char bName[5] = { '\0' };

	printf("\nEnter your first name: ");
	scanf_s("%s", aName, 5);
	printf("\nEnter your last name: ");
	scanf_s("%s", bName, 5);

	printf("\nHello %s %s\n", aName, bName);
	printf("\nYour first name contains ");
	printf("%d characters!\n", nameLength(aName));
	printf("\nYour last name contains ");
	printf("%d characters!\n", nameLength(bName));
	printf("\nYour full name is: %s", strcat_s(aName, bName, 5));
	
	return 0;
}//end of main function

int nameLength(char name[])
{
	int x = 0;
	while (name[x] != '\0')
		x++;
	return x;
}//end of nameLength function definition. 
