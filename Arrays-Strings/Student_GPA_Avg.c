/*
In this program the user can input up to 30 different student Grade Points, 1.0 - 4.0,
when the user has finished <= 30 numbers, the average of these GPA's will be displayed. 
*/


#include <stdio.h>

main() {

    int iSelect = 0, i, iNumGPA = 0;
    float fStoreGPA[30] = { 0 };
    float fSumGPA = 0, fAverageGPA = 0;

    do {

        system("CLS");

        printf("\n\n\t*** Calculate GPA ***\n\n");
        printf("1\tEnter a new GPA");
        printf("\n2\tCalculate GPA average");
        printf("\n3\tExit\n");
        printf("\nPlease press the appropriate number for your selection: ");
        scanf_s("%d", &iSelect);

        if (iSelect == 1 && iNumGPA != 30) {


            printf("\n\nEnter Your GPA for student %d ---> ", (iNumGPA + 1));

            scanf_s("%f", &fStoreGPA[iNumGPA]);

            iNumGPA++;

        }

        else if (iSelect == 1 && iNumGPA == 30)

            printf("\n\nYou can not enter more than 30 GPAs\n\n");


        else if (iSelect == 2) {

            for (i = 0; i <= iNumGPA; i++) {

                fSumGPA += fStoreGPA[i];

            }

            fAverageGPA = (fSumGPA / iNumGPA);

            printf("\n\nAverage GPA is %.2f\n\n", fAverageGPA);

        }


    } while (iSelect != 3 && iSelect != 2);

} //End of main()function
