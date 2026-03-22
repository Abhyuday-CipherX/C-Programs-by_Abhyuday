#include<stdio.h>
char lower_to_upper(char c1)
{char c2;
    c2=(c1>='a'&&c1<='z')?('A'+c1-'a'):c1;
    return(c2);
}
void main()
{char ch,upper_char;
printf("enter a lower case character ");
scanf("%c",&ch);
upper_char=lower_to_upper(ch);
printf("the upper case equivalent of the character entered is %c\n",upper_char);
}