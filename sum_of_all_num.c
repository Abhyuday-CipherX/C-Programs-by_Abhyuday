//WAP to print the sum of all numbers up to a given number
#include <stdio.h>
void main()
{
    int num,sum=0,i;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=0;i<=num ;i++)
    {
        sum=sum+i;
    }
    printf("the sum of all numbers up to %d is %d",num,sum);
}