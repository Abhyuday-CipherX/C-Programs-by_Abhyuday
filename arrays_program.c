// //learning arrays in c
// #include <stdio.h>
// void main()
// {int i;
//    int arr[]={1,2,3,4,5};
//    for(i=0;i<=4;i++)
//    {
//     printf("%d\n",arr[i]);
//    }
//    arr[3]=10;
//    for (i=0;i<5;i++)
//    {
//        printf("%d\n",arr[i]);
//    }
// } //now we will determine the size of an array using sizeOf operator


// #include <stdio.h>
// int Fact(int a);
// int main()
// {
//     int num,factorial;
//     printf("Enter a number to find its factorial:\n");
//     scanf("%d",&num);
//     factorial = Fact(num);
//     printf("Factorial of %d is %d\n",num,factorial); 
// }
// int Fact(int a)
// {
//     if(a==1||a==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return a*Fact(a-1);
//     }
// }

//function to find greatest common divisor of two numbers using recursion and
#include <stdio.h>
int GCD(int a,int b);       
int main()
{
    int num1,num2,gcd;
    printf("Enter two numbers to find their GCD:\n");
    scanf("%d %d",&num1,&num2);
    gcd=GCD(num1,num2);
    printf("GCD of %d and %d is %d\n",num1,num2,gcd);
}
int GCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return GCD(b,a%b);
    }
}

