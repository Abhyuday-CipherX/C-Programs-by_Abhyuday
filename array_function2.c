// a program to merge two arrays using functions and also display the merged array in reverse order
#include<stdio.h>
void read_array(int arr[],int n);
int merge_array(int arr[],int arr2[]);
void display(int arr[],int n);
int main()
{
    int n1,n2;
    printf("\nEnter the length of the first array: ");
    scanf("%d",&n1);
    printf("\nEnter the length of the second array: ");
    scanf("%d",n2);
    int Arr1[n1];int Arr2[n2];
    read_array(Arr1,n1);
    read_array(Arr2,n2);
   int Arr3[]= merge_array(Arr1,Arr2);
   int N=n1+n2;
    display(Arr3,N);
}
void read_array(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}
int merge_array(int arr[],int arr2[])
{
    int i,j;
    int n1= sizeof(arr)/sizeof(arr[0]);
    int n2= sizeof(arr2)/sizeof(arr2[0]);
    int n3=n1+n2;
    int arr3[n3];
    for(i=0;i<n1;i++)
    {
        arr3[i]=arr[i];
    }
    for(j=0;j<n2;j++)
    {
        arr3[i]=arr2[j];
        i++;
    }
    
}
void display(int arr[],int n)
{
    int i;
    printf("\nThe merged array in reverse order is: ");
    for(i=n-1;i>=0;i--)
    {
        printf("\nElement %d: %d",i+1,arr[i]);
    }
}
