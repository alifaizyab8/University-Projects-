#include <stdio.h>
#include <string.h>

void my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void my_strcat(char *dest, const char *src)
{
    int i = 0;
    int j = 0;
    //get size
    while (dest[i] != '\0') i++;
    
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}
int main()
{
    // Exercise 8.28
    // strcpy and strcat
    return 0;
}
