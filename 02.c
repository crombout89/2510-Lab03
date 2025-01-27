// Task 2: Write a function which takes in two integers, and returns the smaller one.

#include <stdio.h>

int smallest_value(int num1, int num2) {
    if (num1 > num2) {
        return num2;
     }
    if (num1 < num2) {
        return num1;
     }
    return 0;
}


int main() {
    int num1, num2;
    printf("Enter two numbers separated by a space:\n");
    scanf("%d %d", &num1, &num2);
    int result = smallest_value(num1, num2);
    printf("%d", result);

    return 0;
}