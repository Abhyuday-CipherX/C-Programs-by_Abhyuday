//WAP to print Armstrong numbers from 1 to 100 by counting the number of digits.
#include <stdio.h>                          
#include <math.h>
void main()
{
    int num, r, sum, temp, count, i;
    printf("Armstrong numbers from 1 to 100 are:\n");
    for(num = 1; num <= 100; num++)
    {
        temp = num;
        sum = 0;
        count = 0;
        while(temp != 0)
        {
            count++;
            temp /= 10;
        }
        
        temp = num;
        while(temp != 0)
        {
            r = temp % 10;
            sum += pow(r, count);
            temp /= 10;
        }
        if(sum == num)
        {
            printf("%d\n", num);
        }
    }
}
