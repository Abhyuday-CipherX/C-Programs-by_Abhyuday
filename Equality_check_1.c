//checking if the two entered numbers are equal or not.
//conditioned that if - else is not to be used.
//This specific program is one of the ways to perform the respective task.
#include<stdio.h>
int main()
{
    int number_1,number_2;
    printf("Enter the first number :");
    scanf("%d", &number_1 );
    printf("Enter the second number:");
    scanf("%d", &number_2);
    printf("%d",number_1==number_2);  // the program returns 1 if the condition is true else it returns false.
}