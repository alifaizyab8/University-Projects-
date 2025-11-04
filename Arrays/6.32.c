#include<stdio.h>
#define SIZE 10
int linearSearch(int arr[], int size, int key)
{
    size-=1;
    if (arr[size]==key)
    {
        return size;
    }else if (size == 0)
    {
        return -1;
    }
    linearSearch(arr,size,key);
    
}
int main()
{
    //recursive linear search
    int arr[SIZE] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int key = 10;
    printf("%d",linearSearch(arr,SIZE,key));
    return 0;
}