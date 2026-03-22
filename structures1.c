#include <stdio.h>
struct Student
{
    int roll_no;
    char name[50];
    float marks;
};
int main()
{
    struct Student s1;
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("marks: %.2f\n", s1.marks);
    struct Student s2 = {2, "Alice", 89.5};
    printf("\nStudent 2 Details:\n");
    printf("Roll Number: %d\n",s2.roll_no);
    printf("Name: %s\n", s2.name);
    printf("marks: %.2f\n", s2.marks);  
    return 0;
}