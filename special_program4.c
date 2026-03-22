// a program to print the letter Y using '*' pattern
#include <stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=10;i++)
    {
        for (j=1;j<=7;j++)
        {
            if (((i<=5)&&((j==1&&i==1)||(j==7&&i==1)||((j==2||j==6)&&(i==2))||((j==3||j==5)&&(i==3))||(j==4&&i==4)))||((i>=5)&&(j==4)))
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