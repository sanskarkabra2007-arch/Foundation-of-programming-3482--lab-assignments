#include <stdio.h>

// Function prototype for the iterative factorial calculation
long long factorial_iterative(int n);

// Function prototype for the recursive factorial calculation
long long factorial_recursive(int n);

int main() {
    int number;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Handle invalid input in the main function for better user feedback
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate and display iterative factorial
    long long result_iterative = factorial_iterative(number);
    if (result_iterative > 0) {
        printf("Iterative Factorial of %d = %lld\n", number, result_iterative);
    }

    // Calculate and display recursive factorial
    long long result_recursive = factorial_recursive(number);
    if (result_recursive > 0) {
        printf("Recursive Factorial of %d = %lld\n", number, result_recursive);
    }

    return 0;
}

// Function definition for the iterative approach
long long factorial_iterative(int n) {
    if (n < 0) {
        return 0; // Error indicator
    }
    long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

// Function definition for the recursive approach
long long factorial_recursive(int n) {
    // Base case: 0! = 1 and 1! = 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive step: n! = n * (n-1)!
        return n * factorial_recursive(n - 1);
    }
}
