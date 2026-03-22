// using pointers and user defined functions to swap two numbers
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    printf("Before swapping: num1=%d, num2=%d\n",num1,num2);
    int *ptr1=&num1;
    int *ptr2=&num2;
    swap(ptr1,ptr2);
    printf("After swapping: num1=%d, num2=%d\n",num1,num2);
}