//6.36
#include<stdio.h>
void stringReverse(char arr[])
{
    if (*arr == '\0')
    {
        return;
    }
    stringReverse(arr+1);
    printf("%c",*arr);
    
}
int main()
{
    char arr[] = "Hello, World!";
    stringReverse(arr);
}