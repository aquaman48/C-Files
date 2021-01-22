//Using pointers to pass arrays for Cryptogram program. 


//the libraries needed to run the code
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//funtion prototypes
void encrypt(char[], int);
void decrypt(char[], int);


int main()
{
	char cString[21] = { 0 };
	int iSelect = 0;
	int iRand;
	srand(time(NULL));
	iRand = (rand() % 4) + 1; //creates a random number (1 - 4)
	//start of while loop
	do {
		system("CLS");
		printf("\n\n1\tEncrypt Clear Text\n");
		printf("2\tDecrypt Cipher Text\n");
		printf("3\tGenerate New Key\n");
		printf("4\tExit\n");
		printf("\nSelect a Cryptography Option from above: ");
		scanf_s("%d", iSelect);

		//switch statement depending on user input
		switch (iSelect) {
		case 1:
			printf("\nEnter one word to be used as clear text that will be encrypted: ");
			scanf_s("%s", cString, 21);
			encrypt(cString, iRand);
			break;
		case 2:
			printf("\nEnter cipher text to decrypt: ");
			scanf_s("%s", cString, 21);
			decrypt(cString, iRand);
			break;
		case 3:
			iRand = (rand() % 4) + 1; //random number (1 - 4)
			printf("\nNew Key has been Generated \n");
			break;
		}//end of the switch statement


	} while (iSelect != 4);//end of do loop and while statment to exit out if user selects 4
	return 0;
} //end of main function

//function definitions for prototypes declared before int main()

void encrypt(char sMessage[], int random)
{
	int x = 0;
	//encrypt the word user input by shifting each characters ASCII value
	while (sMessage[x]) {
		sMessage[x] += random;
		x++;
	}//end of while loop
	x = 0;
	printf("Encrypted Message: ");
	//prints the encrypted message
	while (sMessage[x]) {
		printf("%c", sMessage[x], 0);
		x++;
	}//end of second while loop 
}//end of encrypt function

void decrypt(char sMessage[], int random)
{
	int x = 0; x = 0;

	//decrypts the message by unshifting the charactes ASCII value after being encrypted
	while (sMessage[x]) {
		sMessage[x] = sMessage[x] - random;
		x++;
	}//end of while loop
	x = 0;
	printf("\nThe Decrypted Message: ");

	//displays the decrypted message
	while (sMessage[x]) {
		printf("%c", sMessage[x], 0);
		x++;
	}//end of loop
}//end of decrypt function