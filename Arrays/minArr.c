//6.37
#include<stdio.h>
int recursiveMinimum(int arr[],int size)
{
    if (size == 1)
    {
        return arr[0];
    }
    if (arr[size-1] < arr[0])
    {
        arr[0] = arr[size-1];

    }
    return recursiveMinimum(arr,size-1);
    
    
}
int main()
{
    int arr[10]= {10,9,8,7,6,5,4,3,2};
    printf("%d",recursiveMinimum(arr,10));


}