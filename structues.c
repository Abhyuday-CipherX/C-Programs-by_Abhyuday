//using structures in C to add two numbers
#include <stdio.h>
struct Numbers {
    int a;
    int b;
};
struct Numbers add(struct Numbers num) {
    struct Numbers result;
    result.a = num.a + num.b;
    return result;
}
int main() {
    struct Numbers num;
    printf("Enter two integers: ");
    scanf("%d %d", &num.a, &num.b);
    struct Numbers sum = add(num);
    printf("Sum: %d\n", sum.a);
    return 0;
}