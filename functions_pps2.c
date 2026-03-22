//user defined function to find the lagest of two numbers
#include<stdio.h>
int largest(int a,int b)
{
    int largest = (a>b)?a:b;
    return(largest);
}
int main()
{
    int num1,num2;
    printf("enter two numbers ");
    scanf("%d %d",&num1,&num2);
    int largest_num=largest(num1,num2);
    printf("the largest number is %d\n",largest_num);
    return 0;
}