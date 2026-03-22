#include <stdio.h>

int main() {
    int number_1, number_2;
    printf("Enter first number: ");
    scanf("%d", &number_1);
    printf("Enter second number: ");
    scanf("%d", &number_2);
    (number_1 == number_2) ? printf("The numbers are equal.\n") : printf("The numbers are not equal.\n");// Check equality using ternary operator
    return 0;
}