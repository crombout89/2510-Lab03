/* Task 6: Define a function which takes in two integers, and then prints the result of the
 * first number divided by the second one as a double.
 */

#include <stdio.h>

void divided_by(int num1, int num2) {
    double result = (double) num1 / (double) num2;
    printf("%d divided by %d is %f.", num1, num2, result);
}

int main() {
    int num1, num2;
    printf("Enter 2 integers separated by a space:\n");
    scanf("%d %d", &num1, &num2);
    divided_by(num1, num2);

    return 0;
}