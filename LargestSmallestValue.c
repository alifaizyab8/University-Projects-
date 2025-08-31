#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Sum is %d\n", num1 + num2 + num3);
    printf("Average is %.4f\n", (num1 + num2 + num3) / 3.0);
    printf("Product is %d\n", num1 * num2 * num3);
    if (num1 <= num2 && num1 <= num3)
        printf("Smallest is %d\n", num1);
    else if (num2 <= num1 && num2 <= num3)
        printf("Smallest is %d\n", num2);
    else
        printf("Smallest is %d\n", num3);
    if (num1 >= num2 && num1 >= num3)
        printf("Largest is %d\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("Largest is %d\n", num2);
    else
        printf("Largest is %d\n", num3);
}