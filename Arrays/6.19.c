#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    

int main() {
    int frequency[13] = {0}; // indices 0 and 1 unused 
    int die1, die2, sum;

    srand(time(NULL)); // seed random generator so results differ each run

    // Roll dice 36,000 times
    for (int i = 0; i < 36000; i++) {
        die1 = rand() % 6 + 1; 
        die2 = rand() % 6 + 1; 
        sum = die1 + die2;     
        frequency[sum]++;      
    }
    printf("Sum\tFrequency\n");
    printf("----------------\n");
    for (int i = 2; i < 13; i++) {
        printf("%d\t%d\n", i, frequency[i]);
    }

    return 0;
}
