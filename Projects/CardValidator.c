/*
A credit card validator program. 


line 12 is where you would put the 16 digit card number in question to see if its valid or not.
*/

#include <stdio.h>

int main()
{
	char credit[17] = "3756219867323427"; //16 digit credit card number
	int num[16]; 
	int sum = 0;
	//start of for loop for luhn formula
	for (int i = 0; i < 16; i++) {
		of (i==1 || i==2 || i == 4 || i == 6 || i == 8 || i == 10 || i == 12 || i == 14){
			num[i] = 2*(credit[i] - '0');
			if (num[i] > 9){
				num[i] = num[i] - 9;
			} 
		}
		else{
			num[i] = credit[i] - '0';
		}
		sum = sum + num[i];
	}

	if (sum % 10 == 0) {
		printf("This is a valid credit card number \n");//if card is "valid"
	}
	else{
		printf("This credit card is INVALID!\n");//if card is "invalid"
	}

	return 0;
}