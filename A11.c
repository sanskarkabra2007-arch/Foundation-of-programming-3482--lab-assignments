#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if (n <= 1) return 0; 
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
void primeFactors(int n) {
    printf("Prime factors: ");
    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) { 
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 2) {
        printf("%d ", n);
    }
    printf("\n");
}
int main() {
    int n, choice;
    while (1) { 
        printf("\n=== Simple Number Operations Menu ===\n");
        printf("1. Square Root\n");
        printf("2. Square\n");
        printf("3. Cube\n");
        printf("4. Check Prime\n");
        printf("5. Factorial\n");
        printf("6. Prime Factors\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 7) {
            printf("Exiting the Program.\n");
            break;
        }
        printf("Enter a number: ");
        scanf("%d", &n);
        switch (choice) {
            case 1:
                if (n >= 0) {
                    printf("Square Root of %d = %.2f\n", n, sqrt((double)n));
                } else {
                    printf("Square root of a negative number is not a real number.\n");
                }
                break;
            case 2:
                printf("Square of %d = %d\n", n, n * n);
                break;
            case 3:
                printf("Cube of %d = %d\n", n, n * n * n);
                break;
            case 4:
                if (isPrime(n)) {
                    printf("%d is a Prime number\n", n);
                } else {
                    printf("%d is not a Prime number\n", n);
                }
                break;
            case 5:
                if (n >= 0) {
                    printf("Factorial of %d = %lld\n", n, factorial(n));
                } else {
                    printf("Factorial is not defined for negative numbers.\n");
                }
                break;
            case 6:
                if (n > 1) {
                    primeFactors(n);
                } else {
                    printf("Prime factors are not defined for numbers <= 1\n");
                }
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}