#include <stdio.h>

int main()
{
    // Exercise 8.24
    // only print the string that end in 'tion'
    char str[10][100];
    printf("Number of inputs: \n");
    int n;
    scanf("%d", &n);
    getchar(); // clear buffer

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        printf("Enter string %d\n", i + 1);
        while ((str[i][j] = getchar()) != '\n' && j < 99)
            j++;
        str[i][j] = '\0';
    }

    for (int i = 0; i < n; i++)
    {
        int size = 0;
        while (str[i][size] != '\0')
            size++;

        if ((size >= 5) && (str[i][size - 1] == 'n') && (str[i][size - 2] == 'o') && (str[i][size - 3] == 'i') && (str[i][size - 4] == 't'))
        {
            printf("%s", str[i]);
        }
        printf("\n");
    }

    return 0;
}
