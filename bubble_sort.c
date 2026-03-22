//wap using bubble sort to sort an array of n elements in ascending order
#include<stdio.h>
void main()
{
    int i,j,n,temp;
    printf("Enter the number of elements in the array: \n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element%d : \n",i+1);
        scanf("%d",&arr[i]);
    }
    //bubble sort algorithm
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap arr[j] and arr[j+1]
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("The sorted array in ascending order is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}