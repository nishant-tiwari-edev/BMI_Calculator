#include<stdio.h>

// Function to calculate the BMI
float BMI_CALC(float wt, float ht){
    float c = (wt / (ht * ht)) * 10000;
    return c;
}

int main()
{
    float wt, ht, bmi;

    printf("BMI Calculator\n");

    // Taking input from user
    printf("Enter Your Weight in KGs: ");
    scanf("%f", &wt);

    printf("Enter Your Height in CMs: ");
    scanf("%f", &ht);

    printf("Your Height and Weight are %.2f cm and %.2f kg.\n", ht, wt);

    // Calculating BMI with the function
    bmi = BMI_CALC(wt, ht);

    // Printing Result
    printf("Your BMI is: %.2f\n", bmi);

    return 0;
}
