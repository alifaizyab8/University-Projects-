#include <stdio.h>
int main()
{
    int input_seconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%f", &input_seconds);
    hours = input_seconds / 3600;
    minutes = (input_seconds % 3600) / 60;
    seconds = (input_seconds % 3600) % 60;
    printf("The time is %d:%d:%d (hh:mm:ss)\n", hours, minutes, seconds);
    return 0;
}