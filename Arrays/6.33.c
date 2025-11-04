#include<stdio.h>
int binarySearch(int arr[],int low, int high,int key)
{
    if (arr[high] == key) return high;
    if (arr[low] == key) return low;
    if (high == low) return -1;
    if (arr[(high + low) / 2] > key)
    {
        high = (high +low) / 2;
    }else
        low = (high + low ) / 2;
    return binarySearch(arr,low,high,key);
    
    
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int high = 9;
    int low = 0;
    int key = 9;
    printf("%d",binarySearch(arr,low,high,key));
}