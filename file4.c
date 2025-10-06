#include <stdio.h>
int main() {
    double centigrade, fahrenheit;
    printf("Enter temperature in Centigrade: ");
    scanf("%lf", &centigrade);
    fahrenheit = (centigrade * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.2lf\n", fahrenheit);
    return 0;
}