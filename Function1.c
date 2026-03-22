#include<stdio.h>

int abhi(int a, int b);
int main () {
  int x,y;
  printf("Enter two no : \n" );
  scanf("%d %d",&x,&y);

    abhi(x,y);
}
int abhi(int a, int b)
{
    printf("%d", a+b);
} 