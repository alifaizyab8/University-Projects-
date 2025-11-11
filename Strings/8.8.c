#include <stdio.h>

int main() {
    char input[200];      // string to store the input line
    char c;
    int i = 0;

    printf("Enter six floating-point numbers separated by spaces: ");

    // Read the input line character by character
    while ((c = getchar()) != '\n' && i < 199) {
        input[i] = c;
        i++;
    }
    input[i] = '\0';  // null-terminate the string

    long double numbers[6];  // array to store six long doubles

    // Use sscanf to parse the six numbers from the string
    sscanf(input, "%Lf %Lf %Lf %Lf %Lf %Lf",
           &numbers[0], &numbers[1], &numbers[2],
           &numbers[3], &numbers[4], &numbers[5]);

    // Calculate sum and average using a for loop
    long double sum = 0.0;
    for (i = 0; i < 6; i++) {
        sum += numbers[i];
    }
    long double average = sum / 6.0;

    // Print results
    printf("Sum = %.10Lf\n", sum);
    printf("Average = %.10Lf\n", average);

    return 0;
}

