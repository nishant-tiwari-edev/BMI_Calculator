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

    // Input Validation
    if(ht>0 && wt>0)
    {
        printf("Your Height and Weight are %.2f cm and %.2f kg.\n", ht, wt);

    // Calculating BMI with the function
        bmi = BMI_CALC(wt, ht);

    // Printing Result
        printf("Your BMI is: %.2f\n", bmi);

    // BMI Categories
        if(bmi<=18.5){
            printf("You are Underweight \n");
        }

        else if(bmi<=24.9){
            printf("Congratulations! You have Normal Weight \n");
        }

        else if(bmi<=29.9){
            printf("You are OverWeight \n");
        }

        else if(bmi>=30){
            printf("You are Obese \n");
        }

    }

    else
    {
        printf("Please Enter Valid Details");
    }

    return 0;
}
