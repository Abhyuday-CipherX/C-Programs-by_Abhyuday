// using pointers
#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    int *ptr= &n;
    printf("The address of the variable entered by &n is: %d\n", &n);
    printf("The address of the variable entered by ptr is: %d\n", ptr);
    printf("The value of the variable entered by n is: %d\n", n);
    printf("The value of the variable entered by *ptr is: %d\n", *ptr);
}