#include <stdio.h>
#include <string.h>

int main()
{
    // Exercise 8.17
    //Counting occurrences of a substring in a string without string.h functions
    char str[100], substr[50];
    printf("Enter the main string: ");
    int i = 0;
    while ((str[i] = getchar()) != '\n' && i < 99)
    {
        i++;
    }
    str[i] = '\0';
    printf("Enter the substring to search for: ");
    int j = 0;
    while ((substr[j] = getchar()) != '\n' && j < 49)
    {
        j++;
    }
    substr[j] = '\0';
    // Search for substring
    int found = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        int k = i, l = 0;
        while (str[k] == substr[l] && substr[l] != '\0')
        {
            k++;
            l++;
        }
        if (substr[l] == '\0')
        {
            found++;
        }
    }
    printf("The substring '%s' occurred %d time(s) in the main string.\n", substr, found);

    return 0;
}
