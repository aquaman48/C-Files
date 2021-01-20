// Program to find the average of n numbers using arrays

#include <stdio.h>
#include <stdlib.h>
int main()
{
    //iNums is our array, i is for loop iteration count, n is for how many numbers users will input.
    //sum = 0 but then will equal to sum of users input after each iteration.
    int i;
    float fNums[5] = {0}, fSum = 0.00, fAverage;

    printf("Be prepared to Enter five whole numbers.\n");

    for (i = 0; i < 5; ++i)
    {
        printf("Enter number %d: ", i + 1); //takes user input "n" times
        scanf_s("%f", &fNums[i]);//stores user input into iNums array starting at fNums[0]

        // adding integers entered by the user to the sum variable
        fSum += fNums[i];
        if (fNums[0] < fNums[i])
            fNums[0] = fNums[i];
        
    }

    fAverage = fSum / 5;
    printf("\nAverage of your numbers is: %.2f\n", fAverage);
    printf("\nThe largest number you entered was %.2f \n", fNums[0]);

    return 0;
}