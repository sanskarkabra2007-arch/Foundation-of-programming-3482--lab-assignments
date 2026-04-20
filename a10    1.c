#include <stdio.h>
#include <math.h>
long long factorial(int n) {
    if (n < 0) return -1; 
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int choice;
    float x, y, result;
    int n;
    while (1) {
        printf("\n--- Simple Calculator Menu ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Power (x^y)\n");
        printf("6. Factorial (n!)\n");
        printf("7. Exit\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);
        if (choice == 7) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &x, &y);
                printf("Result: %.2f + %.2f = %.2f\n", x + y);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &x, &y);
                printf("Result: %.2f - %.2f = %.2f\n", x, y, x - y);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &x, &y);
                printf("Result: %.2f * %.2f = %.2f\n", x, y, x * y);
                break;
            case 4:
                printf("Enter dividend and divisor: ");
                scanf("%f %f", &x, &y);
                if (y != 0)
                    printf("Result: %.2f / %.2f = %.2f\n", x, y, x / y);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;
            case 5:
                printf("Enter base and exponent: ");
                scanf("%f %f", &x, &y);
                printf("Result: %.2f ^ %.2f = %.2f\n", x, y, pow(x, y));
                break;
            case 6:
                printf("Enter an integer: ");
                scanf("%d", &n);
                if (n < 0) {
                    printf("Error: Factorial of negative number does not exist.\n");
                } else {
                    printf("Result: %d! = %lld\n", n, factorial(n));
                }
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 7.\n");
        }
    }
    return 0;
}