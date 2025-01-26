// Task 11: Define a program to randomly generate and then print a number in range between 4 to 9

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    int result = (rand() % 6) + 4;  // (0-5) plus 4 is (4-9)
    printf("The random result is: %d", result);

    return 0;
}