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
    char operator;
    double num1, num2, result;
    int factNum;
    printf("--- Simple Calculator Simulator ---\n");
    printf("Operations: + , - , * , / , ^ (power) , ! (factorial)\n");
    do {
        printf("\nEnter operator (+, -, *, /, ^, !) or 'q' to quit: ");
        scanf(" %c", &operator);
        if (operator == 'q' || operator == 'Q') break;
        switch (operator) {
            case '+':
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", num1 + num2);
                break;
            case '-':
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", num1 - num2);
                break;
            case '*':
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", num1 * num2);
                break;
            case '/':
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0)
                    printf("Result: %.2lf\n", num1 / num2);
                else
                    printf("Error: Division by zero!\n");
                break;
            case '^':
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", pow(num1, num2));
                break;
            case '!':
                printf("Enter an integer: ");
                scanf("%d", &factNum);
                if (factNum < 0)
                    printf("Error: Factorial of negative number not defined.\n");
                else
                    printf("Result: %lld\n", factorial(factNum));
                break;
            default:
                printf("Error: Invalid Operator!\n");
        }
    } while (1);
    printf("Calculator closed. Goodbye!\n");
    return 0;
}