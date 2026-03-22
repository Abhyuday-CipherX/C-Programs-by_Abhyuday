//WAP that takes two operands and one operator from the user and perform the operation and prints the result by using Switch statement.
#include <stdio.h>  
void main()
{
    int a=5,b=10;
    char operator;
    printf("Enter operator :");
    scanf("%c",&operator);
    switch (operator)
    {
    case '+': printf("the sum of the two numbers is %d",a+b);
              break;
    case '-': printf("the difference of the two numbers is %d,a-b");
              break;
    case '*': printf("the multiplication of the two numbers is %d",a*b);
              break;
    case '/': printf("the division of the two numbers is %lf",a/b);          
              break;
    default: printf("enter the correct operator");
        break;
    }
}