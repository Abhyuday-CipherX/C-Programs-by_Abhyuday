#include <stdio.h>
int main() {
    int number_1, number_2;
    printf("Enter first number: ");
    scanf("%d", &number_1);
    printf("Enter second number: ");
    scanf("%d", &number_2);
    int difference = number_1 - number_2; // if the two entered numbers are equal then difference = 0.
    int check = (difference == 0); // if differnce = 0 then the value of check = 1, represents true. 0 represents false.
      
    switch (check) {
        case 1:
            printf("Numbers are equal.\n");
            break;
        case 0:
            printf("Numbers are not equal.\n");
            break;
    }
    return 0;
}