



#include <stdio.h>
int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;

    // Compare character by character
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i]; // difference of ASCII values
        }
        i++;
    }

    // If one string ended
    return str1[i] - str2[i];
}

int main()
{
    // Exercise 8.29

    return 0;
}
