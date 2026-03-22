// to make a user defined function to find the factorial of a number
#include<stdio.h>
int factorial(int n)
{
    int fact =1;int i;
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return(fact);
}
void main()
{
    int num; int factorial_output;
    printf("Enter the number whose factorial is to be checked ");
    scanf("%d",&num);
  factorial_output=factorial(num);
  printf("The factorial of the given number is %d",factorial_output);
}
    