//to check whether the year entered is leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d", &year);
    printf("%d",year%4==0); // if year is divisible completely by 4 it is a leap year and the program will print 1 otherwise 0.
    return 0;
}
