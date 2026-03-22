#include <stdio.h>
int main()
{
    int a, b;
    printf("n1:");
    scanf("%d",&a);
    printf("n2:");
    scanf("%d",&b);
    char op;
    printf("op:");
    scanf(" %c",&op);
    if(op=='+'){
        printf("%d\n",a+b);
    }
    if(op=='-'){
        printf("%d\n",a-b);
    }
    if(op=='*'){
        printf("%d\n",a*b);
    }
    if(op=='/'){
        printf("%d\n",a/b);
    }
    return 0;
}