// Task 4: Write a function which takes in a char, and prints the input char 100 times.

#include <stdio.h>

void char_times_100(char input) {
    for (size_t count = 0; count < 100; count++) {
        if (count % 20 == 0) {
            printf("\n");
        }
        printf("%c", input);
    }
}

int main() {
    char input;
    printf("Enter a character:\n");
    scanf("%c", &input);
    char_times_100(input);

    return 0;
}