// a program to calculate the product of two matrices
#include<stdio.h>
void main()
{
    int n1,m1,n2,m2,i,j,k;
    printf("Enter the number of rows and columns of first matrix: \n");
    scanf("%d%d",&n1,&m1);
    printf("Enter the number of rows and columns of second matrix: \n");
    scanf("%d%d",&n2,&m2);
    if(m1!=n2)
    {
        printf("Matrix multiplication not possible with given dimensions.\n");
        return;
    }
    int a[n1][m1],b[n2][m2],product[n1][m2];
    printf("Enter elements of first matrix: \n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            printf("Enter element at position A[%d][%d] : \n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrix: \n");
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            printf("Enter element at position B[%d][%d] : \n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    // Initializing product matrix to zero
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {
            product[i][j]=0;
        }
    }
    // Matrix multiplication
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {
            for(k=0;k<m1;k++)
            {
                product[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Product of the two matrices is: \n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
}
