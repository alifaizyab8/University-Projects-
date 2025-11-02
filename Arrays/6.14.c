#include<stdio.h>
int main()
{
    int arr1[10];
    int arr2[10];
    int union_arr[20];
    int flag ;
    int arr3Element = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d for arr1 array: ", i + 1);
        scanf("%d", &arr1[i]);
        flag = 0;
        for (int j = 0; j < arr3Element; j++)
        {
            if (arr1[i] == union_arr[j])
            {
                flag = 1;
                break;
            }
        }
        
        if (flag == 0)
        {
            union_arr[arr3Element] = arr1[i];
            arr3Element++;
        }
    
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d for arr2 array: ", i + 1);
        scanf("%d", &arr2[i]);
        flag = 0;
        for (int j = 0; j < arr3Element; j++)
        {
            if (arr2[i] ==  union_arr[j])
            {
                flag = 1;
                break;
            
            }
        }
        
        if (flag == 0)
        {
            union_arr[arr3Element] = arr2[i];
            arr3Element++;
        }
    }
    
    printf("Union of two arrays is: \n");
    
    for (int i = 0; i < arr3Element; i++)
    {
        printf("%d ", union_arr[i]);
    }
}