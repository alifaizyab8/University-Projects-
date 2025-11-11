#include <stdio.h>
#include <string.h>

int main()
{
    // Exercise 8.20
    //count the number of words in a string without using string.h
    char str[100];
    int words = 0;
    char ch;
    printf("Enter a string: ");
    int i = 0;
    while((str[i] = getchar())!= '\n' && i <100)
        i++;
    str[i] = '\0';
    // int inWord = 0;
    // for(int j = 0; j < i; j++)
    // {
    //     ch = str[j];
    //     if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    //     {
    //         if(inWord == 0)
    //         {
    //             words++;
    //             inWord = 1;
    //         }
    //     }
    //     else
    //     {
    //         inWord = 0;
    //     }
    // }
    // printf("Number of words: %d\n", words);
    //implementation using countr for whitespaces and enters
    int spaces = 0;
    for(int j = 0; j < i; j++)
    {
        ch = str[j];
        if(ch == ' ' || ch == '\t' || ch == '\n')
            spaces++;
    }
    printf("Number of words: %d\n", spaces + 1);
    // Adding 1 to count the last word if string is not empty
    return 0;
}
