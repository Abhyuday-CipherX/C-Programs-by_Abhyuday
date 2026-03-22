// making a program using functions and arrays
#include<stdio.h>
void read_array(int arr[],int n);
void display_array(int arr[],int n);
int main()
{
    int num[10],n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    read_array(num,n);
    display_array(num,n);
    return 0;
}
void read_array(int arr[10],int n)
{
    int i;
    printf("\n Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        printf("\nElement %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}
void display_array(int arr[10],int n)
{
    int i;
    printf("\n The elements of the array are: ");
    for(i=0;i<n;i++)
    {
        printf("\nElement %d: %d",i+1,arr[i]);
    }
}