#include <stdio.h>
int main()
{
    int intersection[10];
    int intersectCount = 0;
    int flag;
    int arr1[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Array 1 Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    int arr2[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Array 2 Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        flag = 0;
        for (int j = 0; j < 10; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            int duplicate = 0;
            for (int k = 0; k < intersectCount; k++)
            {
                if (intersection[k] == arr1[i])
                {
                    duplicate = 1;
                    break;
                }
            }

            if (!duplicate)
            { // only add if not already in intersection
                intersection[intersectCount++] = arr1[i];
            }
        }
    }

    printf("Intersection of two arrays is: \n");
    for (int i = 0; i < intersectCount; i++)
    {
        printf("%d ", intersection[i]);
    }
}