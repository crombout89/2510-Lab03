// Task 15: Define a program using recursion, to calculate and print the first 20 Fibonacci terms.

#include <stdio.h>

int fibonacci(int nth_term) {
    // Set the base case
    if (nth_term < 2) {
        return nth_term;
    }
    return fibonacci(nth_term -1) + fibonacci(nth_term - 2);
}

int main() {
    for (int nth_term = 1; nth_term <= 20; nth_term++) {
        int result = fibonacci(nth_term);
        printf("Term #%d in the Fibonacci Sequence: %d\n", nth_term, result);
    }
    return 0;
}