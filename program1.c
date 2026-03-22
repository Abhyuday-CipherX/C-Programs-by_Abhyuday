// a program to perform arithmatic operations using user defined functions
#include <stdio.h>
int addition();
int subtraction();
int multiply();
int quotient();
int remainder();

void main()
{
    int choice;
    printf("Enter your choice.\n Enter 1 for Addition\n Enter 2 for Subtraction\n Enter 3 for Multiplication\n Enter 4 for Quotient\n Enter 5 for Remainder\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: addition();
                break;
        case 2: subtraction();
                break;
        case 3: multiply();
                break;
        case 4: quotient(); 
                break;
        case 5: remainder(); 
                break;
        default: printf("Invalid choice\n");
    }
}
int addition()
{
    int a, b, sum;
    printf("Enter two numbers to add: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
    return 0;
}
int subtraction()
{
    int a, b, difference;
    printf("Enter two numbers to subtract: ");
    scanf("%d %d", &a, &b);
    difference = a - b;
    printf("Difference = %d\n", difference);
    return 0;
}
int multiply()
{
    int a, b, product;
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &a, &b);
    product = a * b;
    printf("Product = %d\n", product);
    return 0;
}
int quotient()
{
    int a, b, quotient;
    printf("Enter two numbers to divide: ");
    scanf("%d %d", &a, &b);
    if(b != 0)
    {
        quotient = a / b;
        printf("Quotient = %d\n", quotient);
    }
    else
    {
        printf("Error: Division by zero\n");
    }
    return 0;
}
int remainder()
{
    int a, b, rem;
    printf("Enter two numbers to find remainder: ");
    scanf("%d %d", &a, &b);
    if(b != 0)
    {
        rem = a % b;
        printf("Remainder = %d\n", rem);
    }
    else
    {
        printf("Error: Division by zero\n");
    }
    return 0;
}