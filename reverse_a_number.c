//WAP to find the reverse of a number.
#include<stdio.h>
void main()
{
    int num, reverse=0, r;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        r = num % 10;
        reverse = reverse * 10 + r;
        num = num / 10;
    }
    printf("The reverse of the number is: %d", reverse);
}