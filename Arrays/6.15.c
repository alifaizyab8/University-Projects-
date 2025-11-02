#include<stdio.h>
int main()
{   
    int flag = 0;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Array 1 Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int arr2[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Array 2 Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        if (arr[i] == arr2[j])
        {
            flag = 1;
            break;
        }
    }
    
}




}