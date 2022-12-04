#include<stdio.h>
#include<conio.h>
main()
{
int x=3,y;
clrscr();
y=x++; //here '=' operates first the x++
printf("%d %d",x,y);
y=++x;
printf("\n%d \n%d",x,y);
getch();
}

