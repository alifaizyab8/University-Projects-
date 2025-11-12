#include <stdio.h>

int main()
{
    // Exercise 8.16
    // Searching for a substring in a string without string.h functions
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
            found = 1;
            break;
        }
    }
    // print the string starting from the found substring
    if (found)
    {
        printf("Substring found: %s\n", &str[i]);
    }
    else
    {
        printf("Substring not found.\n");
    }
    // search for substring in the substring above
    found = 0;
    for (i = i + 1; str[i] != '\0'; i++)
    {
        int k = i, l = 0;
        while (str[k] == substr[l] && substr[l] != '\0')
        {
            k++;
            l++;
        }
        if (substr[l] == '\0')
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("Substring found again: %s\n", &str[i]);
    }
    else
    {
        printf("Substring not found again.\n");
    }

    return 0;
}
