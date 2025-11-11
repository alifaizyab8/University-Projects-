#include<stdio.h>
int main(void)
{
    char s1[23] = "HelloWorldnowloremipsum";
    char s2[23] = "skibididopdowblewwipsum";
    printf("%s\n", s1);
    printf("%s\n", s2);
    char *ptr;
    for (int i = 0; s1[i] != '\0'; i++) 
    { 
        int j = 0;
        while (s1[i+j] == s2[j] && s2[j] != '\0')
            j++;
        if (s2[j] == '\0')
        { 
            ptr = &s1[i];
            break; 
        } 
    }

    
}