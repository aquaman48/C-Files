#include <stdio.h>

int main()
{
	FILE* pRead;
	char name[100];
	pRead = fopen_s(&pRead,"C:\\Users\\nswat\\source\\repos\\Week4_Fundamentals_C\\name.txt","r");

	if (pRead == NULL) {
		printf("\nFile Cannot be opened \n");
		return 1;
	}
	else
		printf("Contents of name.txt\n\n");
		fscanf_s(pRead, "%s", name);
	while (!feof(pRead)) {
		printf("%s\n", name);
		fscanf_s(pRead, "%s", name);
	}//end of loop
	return 0;
}