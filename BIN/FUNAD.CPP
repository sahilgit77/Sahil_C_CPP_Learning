#include<stdio.h>
#include<conio.h>
void main()
{
 void mul(void);
 void odde(void);
 clrscr();
 mul();
 odde();
 getch();
}

void mul()
{
 int a,b,mul;
 printf("enter two numbers");
 scanf("%d %d",&a,&b);
 printf("%d",mul=a*b);
}

void odde()
{
 int c;
 printf("\nenter the number");
 scanf("%d",&c);
 c%2==0?printf("even"):printf("odd");
}
