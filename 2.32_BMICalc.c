#include<stdio.h>
int main ()
{   
    printf(" BMI Index :\n\
        Underweight : less that 18.5\n\
        Normal : between 18.5 and 24.9\n\
        Overweight : between 25 and 29.9\n\
        Obese : 30 or greater\n");
    float weight, height, bmi;
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your BMI score is  %.2f\n", bmi);
}