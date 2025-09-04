#include <stdio.h>
int main()
{
    float miles, cost_per_gallon, miles_per_gallon, parking_fees, toll_tax, total_cost;

    printf("Enter total miles driven per day: ");
    scanf("%f", &miles);
    printf("Enter cost per gallon of gasoline: ");
    scanf("%f", &cost_per_gallon);
    printf("Enter average miles per gallon: ");
    scanf("%f", &miles_per_gallon);
    printf("Enter parking fees per day: ");
    scanf("%f", &parking_fees);
    printf("Enter tolls per day: ");
    scanf("%f", &toll_tax);
    total_cost = (miles / miles_per_gallon) * cost_per_gallon + parking_fees + toll_tax;
    printf("Your daily driving cost is: $%.2f\n", total_cost);

    return 0;
}
