#include <stdio.h>
int main()
{
    float u, a, t, v, s;
    printf("Enter the initial velocity, acceleration and time elapsed:\n");
    scanf("%f %f %f", &u, &a, &t);
    v = u + a * t;
    s = u * t + 0.5 * a * t * t;
    printf("Final Velocity \"V\" = %.5f meters per second.\n", v);
    printf("Distance traversed \"S\" = %.5f meters\n", s);
    return 0;
}