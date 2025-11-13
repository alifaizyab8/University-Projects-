#include <stdio.h>
#include <string.h>

int main()
{
    // Exercise 8.25
    //print the representation of ASCII code
    printf("Enter ASCII code... \n");
    int n;
    scanf("%d",&n);
    getchar();
    printf("The character associated with ASCII code is %c", n);
    return 0;
}
