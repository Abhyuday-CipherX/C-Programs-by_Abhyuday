//WAP to convert binary number into decimal number and vice versa
#include <stdio.h>
int main() {
    int choice, binary, decimal = 0, base = 1, temp;
    printf("Choose conversion:\n1. Binary to Decimal\n2. Decimal to Binary\n");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &binary);
        temp = binary;
        while (temp > 0) {
            decimal += (temp % 10) * base;
            base *= 2;
            temp /= 10;
        }
        printf("Decimal equivalent: %d\n", decimal);
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        int binaryNum[32];
        int i = 0;
        while (decimal > 0) {
            binaryNum[i] = decimal % 2;
            decimal /= 2;
            i++;
        }
        printf("Binary equivalent: ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binaryNum[j]);
        }
        printf("\n");
    } else {
        printf("Invalid choice!\n");
    }
    return 0;
}



/*#include<stdio.h>
int main()
{
    int choice;
    printf("enter 1 for binary to decimal conversion and 2 for decimal to binary conversion");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("enter a binary number");
        
    }
*/