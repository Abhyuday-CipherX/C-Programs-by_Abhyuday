//Prpogram 1-Step 3
#include<stdio.h>
int main()
{
    int subject1,subject2,subject3,subject4,subject5,sum_of_marks;
    double percentage;
    printf("Enter Subject 1 marks ");
    scanf("%d",&subject1);
    printf("Enter Subject 2 marks ");
    scanf("%d",&subject2);
    printf("Enter Subject 3 marks ");
    scanf("%d",&subject3);
    printf("Enter Subject 4 marks ");
    scanf("%d",&subject4);
    printf("Enter Subject 5 marks ");
    scanf("%d",&subject5);
    sum_of_marks=subject1+subject2+subject3+subject4+subject5;
    percentage=(double)sum_of_marks/5;
    printf("The sum of marks of student= %d \n",sum_of_marks);
    printf("The percentage obtained by the student= %.2lf ",percentage);
    return 0;
}