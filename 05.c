// Task 5: Write a function which takes in two doubles and prints the non-negative difference.

#include <stdio.h>

void non_negative_difference(double num1, double num2) {
    if (num1 > num2) {
      printf("The difference is %lf.", num1 - num2);
    } else if (num1 < num2) {
      printf("The difference is %lf.", num2 - num1);
    } else {
      printf("0");
    }
}

int main() {
    double num1, num2;
    printf("Enter two double values separated by a space:\n");
    scanf("%lf %lf", &num1, &num2);
    non_negative_difference(num1, num2);
    return 0;
}
