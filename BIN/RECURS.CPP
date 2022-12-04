/*
* RECURSION
	-fun calling itself is k/n as Recursion.

Note-    any problem which can solve by concept  of recursion, is also able
	 to solve by loop but it is not necessary that the problem
	 which can solve by the concept of loop, can solve by concept
	 of recursion.

eg.

main()
{
 int k;
 k=fun(3);
 printf("%d",k);
}
int fun(int a)
{
 int s;
 if(a==1)
  return(a);
 s=a+fun(a-1)      //here in fun() function we call another fun() function that is recursion
 return(s);
}



note:-
1) every time when calling it takes memory in the ram.
2) when fun return a value,then this value goes to where it is calling.
3)
 */

#include<stdio.h>
#include<conio.h>
int sum(int);
main()
{
 int k,m;
 clrscr();
 printf("enter value of m");
 scanf("%d",&m);
 k=sum(m);
 printf("k=%d",k);
 getch();
}
int sum(int a)
{
 int s;
 if(a==1)
	return a;
 s=a+sum(a-1);
	return s;
}