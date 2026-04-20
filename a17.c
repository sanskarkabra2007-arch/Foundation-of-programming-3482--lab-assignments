#include <stdio.h>
#include <math.h>
int main() {
    float x, sum = 0.0, term;
    int i, j, num_terms, fact, sign = 1;
    printf("Enter the value of x (in radians): ");
    scanf("%f", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &num_terms);
    for (i = 1; i <= num_terms; i++) {
        fact = 1;
        for (j = 1; j <= (2 * i) - 1; j++) {
            fact = fact * j;
        }
        term = pow(x, (2 * i) - 1) / fact;
        sum += sign * term;
        sign *= -1;
    }
    printf("Sum of sine series = %f\n", sum);
    return 0;
}