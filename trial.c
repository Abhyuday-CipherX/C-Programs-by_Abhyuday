// a program to find the second largest element in an array
#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int pos = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
            pos=i;
        }
    }
    int second_largest = arr[n-(i+1)];
    for ( i = 0; i < n ; i++)
    {
        if(i!=pos)
        {
            if(arr[i]>second_largest)
            {
                second_largest=arr[i];
            }
        }
    }
    printf("The largest number in the array is: %d . \n", largest);
    printf("The second largest number in the array is: %d .", second_largest);
}