#include <stdio.h>
#include <math.h>  // Required for pow() function

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;
    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);
    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * pow((1 + rate / 100), time) - principal;
    printf("\nSimple Interest = %.2lf\n", simple_interest);
    printf("Compound Interest = %.2lf\n", compound_interest);

    return 0;
}