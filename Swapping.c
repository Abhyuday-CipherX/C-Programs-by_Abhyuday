#include <stdio.h>
int main() {
    int a, b, temporary_variable;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    temporary_variable = a;   // swapping the values of the variables.
    a = b;
    b = temporary_variable;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}