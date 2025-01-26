// Task 9: Define a program which reads in one positive float (called x) and then prints the value
// of sin(2x) [sin(2x) = 2*sin(x)*cos(x)

#include <stdio.h>
#include <math.h>

int main() {
    float input;
    printf("Enter a positive float value to calculate 2sin(x):\n");
    scanf("%f", &input);

    float result = 2 * sin(input) * cos(input);
    printf("The result of sin(2 * %f) is %f", input, result);

    return 0;
}