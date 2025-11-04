#include<stdio.h>
int binarySearch(int arr[],int low, int high,int key)
{
    if (high<low)
    {
        return -1;
    }
    int mid = (high  + low)/2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] < key)
    {
        return binarySearch(arr,mid+1,high,key);
    }
    else
    {
        return binarySearch(arr,low,mid-1,key);
    }
    
    
    
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int high = 9;
    int low = 0;
    int key = 11;
    printf("%d",binarySearch(arr,low,high,key));
}