#include <stdio.h>
#define SIZE 10
int main() {



double arr[SIZE] ={0};

//arr[4];

arr[9] = 1.667;

arr[7] = 3.333;

printf("%.2f\n", arr[9]);
printf("%.2f\n", arr[7]);

for(int x = 0; x < SIZE; x++) {
    printf("%f ", arr[x]);
}


}


