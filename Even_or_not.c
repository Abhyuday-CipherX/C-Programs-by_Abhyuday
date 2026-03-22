//to check whether the number entered by user is even or not
#include<stdio.h>
int main()
{
    int number_1;
    printf("Enter number : ");
    scanf("%d", &number_1);
    printf("%d",number_1%2==0); // if number_1%2==0 it means reaminder is zero and number is even and is represented by 1. if false it returns 0.
    return 0;
}