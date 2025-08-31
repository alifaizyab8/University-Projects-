#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0)
        printf("Enter non zero integers\n");

    if (a != 0 && b != 0 && a % 2 == 0 && b % 2 == 0)
        printf("Both are even\n");

    if (a != 0 && b != 0 && a % 2 == 0 && b % 2 != 0)
        printf("%d is even\n%d is odd\n", a, b);

    if (a != 0 && b != 0 && b % 2 == 0 && a % 2 != 0)
        printf("%d is even\n%d is odd\n", b, a);

    if (a != 0 && b != 0 && a % 2 != 0 && b % 2 != 0)
        printf("Both are odd\n");

    return 0;
}
