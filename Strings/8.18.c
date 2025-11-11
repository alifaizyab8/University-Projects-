#include <stdio.h>
#include <string.h>

int main()
{
    // count the occurence of vowels, consonants, digits and whitespaces in a string using only stdio.h
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, whitespaces = 0;
    char ch;
    printf("Enter a string: ");
    int i = 0;
    while((str[i] = getchar())!= '\n' && i <100)
        i++;

    str[i] = '\0';
    for(int j = 0; j < i; j++)
    {
        ch = str[j];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
        else if(ch >= '0' && ch <= '9')
            digits++;
        else if(ch == ' ' || ch == '\t')
            whitespaces++;
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Whitespaces: %d\n", whitespaces);
        
    return 0;
}
