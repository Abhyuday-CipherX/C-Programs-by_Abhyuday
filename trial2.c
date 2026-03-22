// a program to insert a number at a given location in an array
#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter elment %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the position where you want to insert the new element: ");
    int pos,elem;
    scanf("%d",&pos);
    printf("Enter the element to be inserted: ");
    scanf("%d",&elem);
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1] = elem;
    n++;
    printf("Array after insertion: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}