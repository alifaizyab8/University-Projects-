
#include <stdio.h>

double my_strtod(const char *str)
{
    double result = 0.0;
    double fraction = 0.0;
    double divisor = 1.0;
    int sign = 1;

    // 1. Skip leading whitespace
    while (*str == ' ' || *str == '\t' || *str == '\n')
        str++;

    // 2. Check sign
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
    {
        str++;
    }

    // 3. Read integer part
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }

    // 4. Read fractional part (if any)
    if (*str == '.')
    {
        str++;
        while (*str >= '0' && *str <= '9')
        {
            fraction = fraction * 10 + (*str - '0');
            divisor *= 10.0;
            str++;
        }
        result += fraction / divisor;
    }

    // 5. Apply sign
    result *= sign;

    return result;
}

int main()
{
    const char *numStr1 = "123.456";
    const char *numStr2 = "-0.25";
    const char *numStr3 = "42";

    printf("%f\n", my_strtod(numStr1));
    printf("%f\n", my_strtod(numStr2));
    printf("%f\n", my_strtod(numStr3));

    return 0;
}
