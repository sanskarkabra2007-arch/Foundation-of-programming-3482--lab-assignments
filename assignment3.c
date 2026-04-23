#include<stdio.h>
void generate_multiplication_table(int num,int limit);
int main()
{
    int num,limit;
    printf("Enter an integer to generate its multiplication table: ");
    if (scanf("%d",&num) != 1) { // 1 because a single input number.if you  type 5 than for whatever integer you enter ,it will return invalid
        printf("Invalid input for number.\n");
        return 1;
    }
    printf("Enter the limit for the table(e.g.,10 for upto numx10): ");
    if (scanf("%d",&limit) != 1) {
        printf("Invalid input for limit.\n");
        return 1;
    }
    generate_multiplication_table(num,limit);
    return 0;
}
void generate_multiplication_table(int num,int limit){
    printf("Multiplication table for %d upto %d:\n", num, limit);
    for (int i = 1; i <= limit; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
