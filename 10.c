/* Task 10: Define a program which reads in two positive integers and prints the log (base 10)
   of their sum.
 */

#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    printf("Enter two positive integers separated by a space:\n");
    scanf("%d %d", &num1, &num2);

    double result = log(num1 + num2);
    printf("The log of (%d + %d) is %lf.", num1, num2, result);

    return 0;
}