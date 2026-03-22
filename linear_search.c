// a program to find an element in an array with its index, position using linear search
#include<stdio.h>
void main()
{
    int i,num,n,pos,index,f=0;
    printf("Enter the number of elements in the array: \n");
    scanf("%d",&n);
    printf("Enter the number to find: \n");
    scanf("%d",&num);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element%d : \n",i+1);
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if(arr[i]==num)
        {
            f=1;
            index=i;
            pos=i+1;
            printf("The number is found in the array at index %d and position %d.\n",index,pos);
            break;
        }
    }
    if(f==0)
    {
        printf("The number is not found in the array.");
    }
}