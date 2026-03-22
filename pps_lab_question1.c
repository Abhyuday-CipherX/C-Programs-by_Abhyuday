#include<stdio.h>
int add(int num1,int num2);
int subtract(int num1,int num2);
int multiply(int num1,int num2);
int quotient(int num1,int num2);            
int remainder(int num1,int num2);
int main()
{
    int value1,value2;
    printf("Enter two numbers");
    scanf("%d %d",&value1,&value2);
    printf("Addition: %d\n",add(value1,value2));
    printf("Subtraction: %d\n",subtract(value1,value2));            
    printf("Multiplication: %d\n",multiply(value1,value2));
    printf("Quotient: %d\n",quotient(value1,value2));
    printf("Remainder: %d\n",remainder(value1,value2));
    return 0;
};

int add(int num1,int num2)
{
    return num1+num2;
}   
int subtract(int num1,int num2)
{
    return num1-num2;
}
int multiply(int num1,int num2)
{
    return num1*num2;
}
