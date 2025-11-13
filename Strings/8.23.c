#include <stdio.h>
#include <string.h>

int main()
{
    // Exercise 8.23
    // Program that takes in series of strings meaning it takes multiple inputs first and only prints those starting with "Th"
    char str[10][100];
    printf("Number of inputs: \n");
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while ((str[i][j] = getchar()) != '\n' && j < 99)
            j++;
        str[i][j] = '\0';
    }
    for (int i = 0; i < n; i++)
    {
        if ((str[i][0] == 'T') && (str[i][1] == 'h'))
        {

            for (int k = 0; str[i][k] != '\0'; k++)
            {

                printf("%c", str[i][k]);
            }
            printf("\n");
        }
        
    }

    return 0;
}
