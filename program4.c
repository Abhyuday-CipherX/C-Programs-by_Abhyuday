// a program to calculate area and perimeter of a scalene triangle using user defined functions
#include<stdio.h>
#include<math.h>
float CalculateAreaOfTriangle(int a, int b, int c);
float CalculatePerimeterOfTriangle(int a, int b, int c);
int main()
{
    int a, b, c;
    float area, perimeter;
    printf("Enter side a: ");
    scanf("%d", &a);
    printf("Enter side b: ");
    scanf("%d", &b);
    printf("Enter side c: ");
    scanf("%d", &c);
    perimeter = CalculatePerimeterOfTriangle(a, b, c);
    area = CalculateAreaOfTriangle(a, b, c);
    printf("\nArea of Triangle = %.2f\n", area);
    printf("Perimeter of Triangle = %.2f\n", perimeter);
    return 0;
}
float CalculatePerimeterOfTriangle(int a, int b, int c)
{
    return (a + b + c);
}
float CalculateAreaOfTriangle(int a, int b, int c)
{
    float s = ((float)(a + b + c)) / 2.0;
    return pow((s * (s - a) * (s - b) * (s - c)), 0.5);
}