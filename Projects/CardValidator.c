#include <stdio.h>

int main()
{
	char credit[17] = "3756219867323427";
	int num[16];
	int sum = 0;

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
		printf("This is a valid credit card number \n");
	}
	else{
		printf("This credit card is INVALID!\n");
	}

	return 0;
}