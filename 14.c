/* Task 14: define a program which reads in one positive integer from user, and then prints
   out the input number in reversed order, using recursion.
   (Eg, when input is 123, output should be 321; when input is 100, output can be 001 or just 1)
 */

#include <stdio.h>

void reverse_number(int input) {
    // Set the base case
    if (input == 0) {
        return;  // End recursion
    }
    printf("%d", input % 10);
    reverse_number(input / 10);
}

int main() {
    int input;
    printf("Enter an integer value to reverse:\n");
    scanf("%d", &input);
    reverse_number(input);

    return 0;
}