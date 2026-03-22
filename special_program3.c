// program to print H by using '*' pattern
#include <stdio.h>
int main()  
{
    int i,j;
    for (i=1;i<=10;i++)
    {
        for (j=1;j<=7;j++)
        {
            if ((j==2)||(j==6)||((i==5)&&(j>=2&&j<=6)))
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
