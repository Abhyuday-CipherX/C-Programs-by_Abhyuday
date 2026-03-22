//WAP to check whether the entered number is prime or not.
#include <stdio.h>
void main()
{
    int num,i=1,c=0;
    printf("Enter a number to be checked ");
    scanf("%d",&num);
    while (i<=num)
    {
        if(num%i==0)
        c++;
    }

    if (c==2)
    {
        printf("The number is a prime number");
    }
    else { printf("The number is composite."); 
    }
}