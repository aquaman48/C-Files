//Creating a base file that Concatenates strings 

#include <stdio.h>
#include <string.h>

int main()
{
	char cStr1[40] = "Concatenating Strings ";
	char cStr2[] = "is oh so much fun! Am I right? ";

	printf("\n%s\n", strcat(cStr1, cStr2));
	return 0;
}