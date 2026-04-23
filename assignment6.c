#include <stdio.h>
long long factorial_iterative(int n);
long long factorial_recursive(int n);
int main() {
    int number;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    long long result_iterative = factorial_iterative(number);
    if (result_iterative > 0) {
        printf("Iterative Factorial of %d = %lld\n", number, result_iterative);
    }
    long long result_recursive = factorial_recursive(number);
    if (result_recursive > 0) {
        printf("Recursive Factorial of %d = %lld\n", number, result_recursive);
    }
    return 0;
}
long long factorial_iterative(int n) {
    if (n < 0) {
        return 0; 
    }
    long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}
long long factorial_recursive(int n) {
    // Base case: 0! = 1 and 1! = 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive step: n! = n * (n-1)!
        return n * factorial_recursive(n - 1);
    }
}
