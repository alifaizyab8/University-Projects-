#include <stdio.h>
#define SIZE 3

int main()
{
    //int table[SIZE][SIZE];

    printf("Total elements = %d\n", SIZE * SIZE);

    // for (int x = 0; x < SIZE; x++)
    // {
    //     for (int y = 0; y < SIZE; y++)
    //     {
    //         table[x][y] = x + y;
    //         printf("%d\n", table[x][y]);
    //
    //     }
    //
    // }

    int table[SIZE][SIZE] = { { 1, 8 }, { 2, 4, 6 }, { 5 } };

    for (int x = 0; x < SIZE; x++)
    {
        for (int y = 0; y < SIZE; y++)
        {
            printf("%d ", table[x][y]);
        }
        printf("\n");
    }

}