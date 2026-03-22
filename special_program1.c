// program to print A from my name Abhyuday by using '*' pattern

#include <stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if((i==2&&j==5)||((i==3)&&(j==4||j==6))||((i==4)&&(j>=3&&j<=7))||((i==5)&&(j==2||j==8))||((i==6)&&(j==1||j==9)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}