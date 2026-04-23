#include <stdio.h>
#include <math.h> 
int main() {
    long long binaryNum;
    int decimalNum = 0, remainder, base = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);
    while (binaryNum > 0) {
        remainder = binaryNum % 10;
        binaryNum = binaryNum / 10;
        decimalNum = decimalNum + remainder * base;
        base = base * 2;
    }
    printf("Decimal equivalent = %d\n", decimalNum);
    return 0;
}
