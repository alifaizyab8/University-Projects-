#include<stdio.h>
int main()
{
    int first_num, second_num;
    printf("Enter two integers: ");
    scanf("%d %d",&first_num,&second_num);
    if (first_num==0 || second_num==0)
    {
        printf("Enter non zero integers\n");
        return 0;
    }
    if (first_num%second_num==0)
        printf("%d is a multiple of %d\n",first_num,second_num);
    if (second_num%first_num==0)
        printf("%d is a multiple of %d\n",second_num,first_num);
    if (first_num%second_num!=0 && second_num%first_num!=0)
        printf("Neither number is a multiple of the other\n");
    return 0;
}