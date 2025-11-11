#include<stdio.h>
int main()
{
    //convert string to integer then calcualte average and sum
    char str[100];
    int sum = 0, i = 0, num, count = 0;
    printf("Enter numbers separated by spaces: ");
    int j = 0;
    while ((str[j] = getchar()) != '\n' && j < 99)
    {
        j++;
    }
    str[j] = '\0'; // Null-terminate the string
    
}