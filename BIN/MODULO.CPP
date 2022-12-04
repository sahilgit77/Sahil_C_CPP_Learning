#include<stdio.h>
#include<conio.h>
main()
{
int r,a,b;
clrscr();
printf("enter value of both digits");
scanf("%d\n%d",&a,&b);
r=a%b;
printf("value of remainder is %d",r);
getch();
}


/*
%module operator is used for
telling remainder and used for checking divisiblity

eg.
5%2  =  1
-5%2 = -1    answer having same sign as the sign of nomainator
5%-2 =  1
-5%-2= -1

NOTE:- module operator never works on real value like 3.5%4 o/p shws error
so both operands should be integers.
*/