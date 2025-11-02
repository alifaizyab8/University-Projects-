#include <stdio.h>
int main()
{

    int arr[10] = {12, 8, 5, 6, 9, 15, 20, 25, 30, 10};
    int minIndex;
    for (int i = 0; i < 10; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}