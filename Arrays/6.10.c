#include <stdio.h>

int main() {
    int counter[9] = {0};
    int salary;

    // Example: assume 10 salespeople
    float sales[10] = {5000, 3000, 10000, 1500, 800, 400, 2500, 7000, 12000, 500};

    for (int i = 0; i < 10; i++) {
        salary = (int)(200 + 0.09 * sales[i]); // truncate to int

        if (salary >= 200 && salary <= 299)
            counter[0]++;
        else if (salary <= 399)
            counter[1]++;
        else if (salary <= 499)
            counter[2]++;
        else if (salary <= 599)
            counter[3]++;
        else if (salary <= 699)
            counter[4]++;
        else if (salary <= 799)
            counter[5]++;
        else if (salary <= 899)
            counter[6]++;
        else if (salary <= 999)
            counter[7]++;
        else
            counter[8]++;
    }

    printf("Salary Ranges:\n");
    printf("$200-299 : %d\n", counter[0]);
    printf("$300–399 : %d\n", counter[1]);
    printf("$400–499 : %d\n", counter[2]);
    printf("$500–599 : %d\n", counter[3]);
    printf("$600–699 : %d\n", counter[4]);
    printf("$700–799 : %d\n", counter[5]);
    printf("$800–899 : %d\n", counter[6]);
    printf("$900–999 : %d\n", counter[7]);
    printf("$1000 and over : %d\n", counter[8]);

    return 0;
}
