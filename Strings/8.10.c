#include <stdio.h>

int main() {
    char str1[200], str2[100];
    int i = 0, j = 0;

    // Input strings
    scanf("%s", str1);
    scanf("%s", str2);

    // Find length of str1
    while (str1[i] != '\0') i++;
    //input numbers of characters to be concatenated
    int n;
    scanf("%d", &n);

    // Append str2 to str1
    while (str2[j] != '\0'&& j < n) {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    // Print result
    printf("%s\n", str1);
    while (str1[i] != '\0') i++;
    printf("%d\n", i); // Print length of concatenated string

    return 0;
}
