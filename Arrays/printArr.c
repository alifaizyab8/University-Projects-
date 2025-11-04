//6.35
#include<stdio.h>
void printArray(int arr[],int size)
{
    if (size == 0)
    {
        return;
    }
    else
    {
        printArray(arr,size-1);
        printf("%d ",arr[size-1]);
    }
    
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    printArray(arr,size);
}