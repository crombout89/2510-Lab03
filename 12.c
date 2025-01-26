/* Task 12: Define a program to randomly generate and print the top value on a six-sided die
   (1 ~ 6) for 20 times (Hint: top value is the value on the side facing up)
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    for (size_t roll = 0; roll < 20; roll++) {
        int die_value = (rand() % 6) + 1;  // (0-5) plus 1 is (1-6)
        printf("The result of roll #%llu is: %d\n", roll + 1, die_value);
    }
    return 0;
}