#include<stdio.h>
int main()
{
    float u,a,t,v,s;
    printf("Enter the initial velocity in meters per second, acceleration in meters per second squared and time elapsed in seconds:\n");
    scanf("%f %f %f",&u,&a,&t);
    v = u + a*t;
    s = u*t + 0.5*a*t*t;
    printf("Final Velocity \"V\" = %.5f meters per second.\n",v);
    printf("Distance traversed \"S\" = %.5f meters\n",s);
    return 0;
}