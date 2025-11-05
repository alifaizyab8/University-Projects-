#include<stdio.h>
int inPalindrome(char str[], int start, int end)
{   
    
    
    if (start >= end)
    {
        return 1;
    }
    
    if (str[start] == ' ')
    {
        start++;
    }
    
    

    if(str[end] == ' ')
    {
        end--;
    }
    if (str[start] >= 'A' && str[start] <= 'Z')
    {
        str[start] = str[start] + 32;
    }
    if (str[end] >= 'A' && str[end] <= 'Z')
    {
        str[end] = str[end] + 32;
    }
    
    if (str[start] != str[end])
    {
        return 0;
    }
    return inPalindrome(str, start + 1, end - 1);
}
int main()
{
    char str[] = "able was i ere i saw elba";

printf("%d\n", inPalindrome(str, 0, 24));
    return 0;
}
    


