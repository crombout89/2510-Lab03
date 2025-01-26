// Task 1: Write a function which takes in an integer, and then prints the triple of its value.

#include <stdio.h>

void triple(int number) {
    printf("%d tripled is %d.\n", number, number * 3);
}

int main() {
  int number;
  printf("Enter a number:\n");
  scanf("%d", &number);
  triple(number);

  return 0;
}