//WAP to print sum of even and odd numbers from 1 to N numbers
#include <stdio.h>
void main()
{
    int num,sum_odd=0,sum_even=0,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0){
    for(i=1;i<=num;i++)
    {
        if (i%2==0)
        {
           sum_even=sum_even+i;
        }else if (i%2!=0)
        {
            sum_odd=sum_odd+i;
        }
       
    }
     printf("The sum of even numbers is: %d ",sum_even);
     printf("\nThe sum of odd numbers is:  %d ",sum_odd);
    }else { 
        printf("The number entered is 0");
    }
}