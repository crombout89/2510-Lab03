// Task 8: Define a program which reads in two doubles, and then prints the one with the larger absolute value.

#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    printf("Enter two double values separated by a space:\n");
    scanf("%lf %lf", &num1, &num2);

    double abs_num1 = fabs(num1);
    double abs_num2 = fabs(num2);

    if (abs_num1 > abs_num2) {
        printf("%lf is the larger absolute value.", abs_num1);
    } else if (abs_num1 < abs_num2){
        printf("%lf is the larger absolute value.", abs_num2);
    } else {
        printf("They have the same absolute value.");
    }

    return 0;
}