// Task 3: Write a function which takes in a float, prints it, and then returns the absolute value.

#include <stdio.h>

float absolute_value(float number) {
    printf("You entered: %f\n", number);
    if (number < 0) {
        return -number;
    }
    return number;
}

int main() {
    float number;
    printf("Enter a float number:\n");
    scanf("%f", &number);
    float result = absolute_value(number);
    printf("The absolute value is: %f\n", result);

    return 0;
}