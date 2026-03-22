#include<stdio.h>
void main()
{
    int n,m,i,j;
    printf("Enter the number of rows: \n");
    scanf("%d",&n);
    printf("Enter the number of columns: \n");
    scanf("%d",&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter element at position A[%d][%d] : \n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    if(n==m)
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("Sum of diagonal elements is: %d\n", sum);
}
    else
    {
        printf("Matrix is not square, diagonal sum not possible.\n");
    }
}