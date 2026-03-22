//WAP that simply takes elements of the array from the user and finds the sum of these elements
#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];  
    for(int i = 0; i < n; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}