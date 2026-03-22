// making a stickman character using * pattern
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(((j>=4&&j<=6)&&(i==1||i==3))||((i==2)&&(j==4||j==6))||((j==5)&&(i>=3&&i<=6))||((i==5)&&(j==4||j==6))||((i==6)&&(j==3||j==7))||((i==7)&&(j==4||j==6))||((i==8)&&(j==3||j==7)))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        
    }
}