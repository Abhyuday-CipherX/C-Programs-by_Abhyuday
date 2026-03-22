//finding the greatest number of three numbers entered by user
#include<stdio.h>
int main()
{
    int number_1,number_2,number_3,greatest_num;
    printf("Enter first number : ");
    scanf("%d",&number_1);
    printf("Enter second number : ");
    scanf("%d",&number_2);
    printf("Enter third number : ");
    scanf("%d",&number_3);
    greatest_num= number_1*(number_1>number_2 && number_1>number_3) + number_2*(number_2>number_1 && number_2>number_3) +
                  number_3*(number_3>number_1 && number_3>number_2);
    printf("The greatest number of the three is : %d\n",greatest_num);              
}