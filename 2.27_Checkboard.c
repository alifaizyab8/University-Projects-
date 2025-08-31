#include <stdio.h>
int main()
{
    // Hard Coded Method
    printf("Hard Coded Method:\n\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");

    // Using Loops
    printf("\n\nUsing Loops:\n\n");
    int i;
    for (i = 1; i <= 8; i++)
    {
        if (i % 2 != 0)
            printf("* * * * * * * *\n");
        else
            printf(" * * * * * * * *\n");
    }
}