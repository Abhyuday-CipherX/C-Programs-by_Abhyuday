//this is program 2 of question 7
#include <stdio.h>
int main() {
    int number_1,number_2,number_3,greatest_num;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &number_1, &number_2, &number_3);
    greatest_num = (number_1 > number_2) ? ((number_1 > number_3) ? number_1 : number_3) : ((number_2 > number_3) ? number_2 : number_3); //ternary operators used
    printf("The greatest number is %d\n", greatest_num);
    return 0;
}