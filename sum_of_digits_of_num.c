//WAP to find the sum of digits of the entered numberc
#include<stdio.h>
void main()
{
    int num, sum=0, r;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }
    printf("The sum of digits is: %d", sum);
}