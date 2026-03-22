#include <stdio.h>
int main() {
    double subject1,subject2,subject3,subject4,subject5,percentage,total_marks;
    printf("Enter Subject 1 marks : ");
    scanf("%lf", &subject1);
    printf("Enter Subject 2 marks : ");
    scanf("%lf",&subject2);
    printf("Enter Subject 3 marks : ");
    scanf("%lf",&subject3);
    printf("Enter Subject 4 marks : ");
    scanf("%lf",&subject4);
    printf("Enter Subject 5 marks : ");
    scanf("%lf",&subject5);
    total_marks=subject1+subject2+subject3+subject4+subject5;
    percentage = (total_marks / 500) * 100;
    switch ((int)percentage / 10) {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
        case 6:
            printf("Grade: C\n");
            break;
        default:
            printf("Grade: D\n");
    }
    printf("Percentage: %.2lf%%\n", percentage);
    return 0;
}