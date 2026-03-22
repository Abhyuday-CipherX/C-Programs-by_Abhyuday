//WAP that inputs two arrays and saves sum of corresponding elements of these arrays in a third array and prints them
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter length of the arrays: ");
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    int arr3[n];
    for (i = 0; i<n; i++)
    {
        printf("Enter element %d of first array: ", i+1);
        scanf("%d", &arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter element %d of secind array: ", i+1);
        scanf("%d", &arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
    }
    printf("The resultant array after adding corresponding elements is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr3[i]);
    }
}