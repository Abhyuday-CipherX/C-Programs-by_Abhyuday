// a program to calculate the area and perimeter of rectangle ausing user defined functions
#include <stdio.h>
int CalculateAreaOfRectangle(int length, int width);
int CalculatePerimeterOfRectangle(int length, int width);
int main()
{
    int length,width,perimeter,area;
    printf("Enter length : ");
    scanf("%d",&length);
    printf("Enter width : ");
    scanf("%d",&width);
    area = CalculateAreaOfRectangle(length,width);
    perimeter = CalculatePerimeterOfRectangle(length,width);
    printf("\nArea of Rectangle = %d\n",area);
    printf("Perimeter of Rectangle = %d\n",perimeter);
}
int CalculateAreaOfRectangle(int length, int width)
{
    return length * width;
}
int CalculatePerimeterOfRectangle(int length, int width)
{
    return (2 * (length + width));
}