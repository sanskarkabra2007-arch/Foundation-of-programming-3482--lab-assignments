#include <stdio.h>
int main() {
    int number, remainder, reversedNumber = 0;
    printf("Enter an integer: ");
    if (scanf("%d", &number) == 1) {
        int tempNumber = number;
        while (tempNumber != 0) {
        remainder = tempNumber % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        tempNumber = tempNumber / 10;
        }
    } else {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    printf("Reversed number: %d\n", reversedNumber);
    return 0;
}
