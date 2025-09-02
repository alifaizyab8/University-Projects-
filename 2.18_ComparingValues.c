#include <stdio.h>
int main()
{
    float highest_rainfall, current_rainfall;
    printf("Enter the highest rainfall recorded (in mm):\n");
    scanf("%f", &highest_rainfall);
    printf("Enter the current rainfall (in mm):\n");
    scanf("%f", &current_rainfall);

    if (current_rainfall > highest_rainfall)
    {
        printf("Current rainfall exceeds last year numbers\n");
        highest_rainfall = current_rainfall;
    }
    if (current_rainfall <= highest_rainfall)
    {
        printf("Current rainfall does not exceed last year numbers.\n");
    }

    printf("The highest rainfall is now set to  %.3f mm\n", highest_rainfall);
    return 0;
}
