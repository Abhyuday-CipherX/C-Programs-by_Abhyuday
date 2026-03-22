//letter lowercase to uppercase conversion
#include<stdio.h>
char lowerCase_to_upperCase(char c1) //remember to not put semicolon here
{
    char c2;
    c2=(c1>='a'&& c1<='z')?('A'+c1-'a'):(c1);
    return(c2);
}
int main()
{
    char lower,upper;
    printf("enter a lower case letter or any special character ");
    scanf("%c",&lower);
    upper=lowerCase_to_upperCase(lower);
    printf("\nthe upper case equivalent of the character entered is %c\n\n",upper);
    return 0;
}
