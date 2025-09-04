#include <stdio.h>

int main()
{
    // product of three integers
    int x, y, z, result;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    result = x * y * z;
    printf("The product is %d\n", result);

    return 0;
}
