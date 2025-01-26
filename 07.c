/* Task 7: Define a program which reads in a double, and then prints it out three times:
 * (1): as an integer
 * (2): as a double
 * (3): as a float
 */

#include <stdio.h>

int main() {
    double input;
    printf("Enter a double value:\n");
    scanf("%lf", &input);

    int integer_value = (int) input;
    double double_value = input;
    float float_value = (float) input;

    printf("%lf as an integer: %d\n", input, integer_value);
    printf("%lf as a double: %lf\n", input, double_value);
    printf("%lf as a float: %f", input, float_value);

    return 0;
}