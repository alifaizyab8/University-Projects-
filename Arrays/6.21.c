#include <stdio.h>
#define ROWS 3
#define COLS 3
int main()
{

    // Multiply two 2D arrays

    int a[ROWS][COLS] =
        {
            {1, 0, 0},
            {0, 1, 0},
            {0, 0, 1}};
    int b[ROWS][COLS] =
        {
            {1, 0, 0},
            {0, 1, 0},
            {0, 0, 1}};
    int result[ROWS][COLS] = {0};
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            for (int k = 0; k < ROWS; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }
}