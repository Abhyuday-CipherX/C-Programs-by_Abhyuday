/*
 functions
 1. function declaration
 int add(int first_num, int second_num); 
                                                                       difference between parameter and argument is important
 2. function call
int main()
{
    int a = 5, b = 10, sum;
    sum = add(a, b);                        //printf uses call by value whereas scanf uses call by reference
    return 0;
}
 3. function definition
 int add(intx,inty)                                     //call by value
 return x+y;*/
 #include<stdio.h>
 int subtract(int x , int y)
{
    return x-y;
}
 int main()
{
    int num1,num2,store;
    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);
    store=subtract(num1,num2);                   
    printf("the difference of the two numbers is %d",store);
}
