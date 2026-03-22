// a program to calculate the simple interest and compound interest using user defined functions
#include <stdio.h>
#include <math.h>   
void Calculating_Simple_interest();
void Calculating_Compound_interest();
void main()
{
    int choice;
    printf("Enter your choice.\n Enter 1 for Simple Interest\n Enter 2 for Compound Interest\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: Calculating_Simple_interest();
                break;
        case 2: Calculating_Compound_interest();
                break;
        default: printf("Invalid choice\n");
    }
}
void Calculating_Simple_interest()
{
    float principal, rate, time, interest;
    printf("Enter principal amount, rate of interest and time in years: ");
    scanf("%f %f %f", &principal, &rate, &time);
    interest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", interest);
}
void Calculating_Compound_interest()
{
    float principal, rate, time, amount, interest;
    printf("Enter principal amount, rate of interest and time in years: ");
    scanf("%f %f %f", &principal, &rate, &time);
    amount = principal * (pow((1 + rate / 100), time));
    interest = amount - principal;
    printf("Compound Interest = %.2f\n", interest);
}