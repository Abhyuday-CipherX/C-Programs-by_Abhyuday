// a program to store marks of 5 students and calculate the average of marks of them and create  a function called CalculateAverageMarksOfStudents
#include <stdio.h>
float CalculateAverageMarksOfStudents(int student1, int student2, int student3, int student4, int student5);
int main()
{
    int student1, student2, student3, student4, student5;
    float average;
    printf("Enter marks of student 1: ");
    scanf("%d", &student1);
    printf("Enter marks of student 2: ");
    scanf("%d", &student2);
    printf("Enter marks of student 3: ");
    scanf("%d", &student3);
    printf("Enter marks of student 4: ");
    scanf("%d", &student4);
    printf("Enter marks of student 5: ");
    scanf("%d", &student5);
    average = CalculateAverageMarksOfStudents(student1, student2, student3, student4, student5);
    printf("\nAverage Marks of Students = %.2f\n", average);
    return 0;
}
float CalculateAverageMarksOfStudents(int student1, int student2, int student3, int student4, int student5)
{
    return ((float)(student1 + student2 + student3 + student4 + student5)) / 5.0;
}