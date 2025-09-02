#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (a == 0 || b == 0)
    {
        printf("Enter non zero integers\n");
        return 1;
    }
    if (a % b == 0)
        printf("%d is a multiple of %d\n", a, b);
    if (b % a == 0)
        printf("%d is a multiple of %d\n", b, a);
    if (a % b != 0 && b % a != 0)
        printf("Neither number is a multiple of the other\n");
    return 0;
}