#include<stdio.h>
int main ()
{
    int num;
    printf("Enter a five digit non zero integer: ");
    scanf("%d",&num);
    if (num<10000 || num>99999)
    {
        printf("Program terminated. Enter a five digit non zero integer\n");
        return 0;
    }
    int a, b, c, d, e;
    e = num % 10;
    d = (num / 10) % 10;
    c = (num / 100) % 10;
    b = (num / 1000) % 10;
    a = (num / 10000) % 10;
    printf("%d   %d   %d   %d   %d\n",a,b,c,d,e);
    return 0;
}