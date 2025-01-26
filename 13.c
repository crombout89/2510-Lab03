/* Task 13: Define a program to calculate 10!  and print the result, using recursion
   [hint: int may not be big enough, you may want to use long]
 */

#include <stdio.h>

long factorial(int number) {
    // Set the base case
    if (number < 2) {
        return 1;  // 0! and 1! are both 1
    }
    return number * factorial(number - 1);
}

int main() {
    int number = 10;
    long result = factorial(number);
    printf("%ld", result);

    return 0;
}