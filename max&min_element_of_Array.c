//WAP to find the minimum and maximum element of the array.
#include<stdio.h>
int main()
{
    int i,n,max,min;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);
    return 0;
}