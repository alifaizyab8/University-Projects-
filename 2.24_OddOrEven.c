#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    if (a==0 || b==0)
    {
        printf("Enter non zero integers\n");
        return 0;
    }
    if (a%2==0 && b%2==0)
        printf("Both are even\n");
    else if (a%2==0)
    {
        printf("%d is even\n",a);
        printf("%d is odd\n",b);
    }else if (b%2==0)
    {    
        printf("%d is even\n",b);
        printf("%d is odd\n",a);
    }else
        printf("Both are odd\n");
    return 0;
}