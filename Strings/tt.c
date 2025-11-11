#include <stdio.h>
#include <conio.h>

int main()
{

    char c;
    char s[100];
    printf("Enter a string: ");

    int i = 0;
    while ((c = getchar()) != '\n' && i < 99)
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0'; // Null-terminate the string
    printf("You entered: %s\n", s);
    // alternating upper and lower case letters
    int j = 0;
    int k = 1;
    for (j = 0; j < 99; j += 2)
    {
        if ((s[j] >= 'a') && (s[j] <= 'z'))
        {
            s[j] -= 32;
        }
    }
    for (; k < 99; k += 2)
    {
        if ((s[k] >= 'A') && (s[k] <= 'Z'))
        {
            s[k] += 32;
        }
    }
    printf("You entered: %s\n", s);
}