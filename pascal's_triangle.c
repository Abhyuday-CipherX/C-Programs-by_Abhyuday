/*WAP a program to print the following pattern: 
             1
          1    1
       1    2    1
     1   3     3    1
   1   4    6    4   1
 1   5   10   10  5   1
 */
#include<stdio.h>
void main()
{

    int i,j,space,num=1,coef=1,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf("  ");
        }
        for(j=0;j<=i;j++)
        {
            if (j==0 || i==0)
                coef=1;
            else
                coef=coef*(i-j+1)/j;
            printf("%4d",coef);
        }
        printf("\n");
    }
}

