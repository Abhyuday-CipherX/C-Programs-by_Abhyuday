//WAP to find the factorial of a given number
#include <stdio.h>
void main()     
{
    int num,fact=1,i;
    printf("Enter a number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("the factorial of %d is %d",num,fact);
}