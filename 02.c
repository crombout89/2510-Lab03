// Task 2: Write a function which takes in two integers, and returns the smaller one.

#include <stdio.h>

void smallest_value(int num1, int num2) {
    if (num1 > num2) {
        printf("%d is the smaller value.\n", num2);
     } else if (num1 < num2) {
        printf("%d is the smaler value.\n", num1);
     } else {
       printf("They are the same.");
     }
}

int main() {
    int num1, num2;
    printf("Enter two numbers separated by a space:\n");
    scanf("%d %d", &num1, &num2);
    smallest_value(num1, num2);

    return 0;
}