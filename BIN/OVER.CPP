/* vid-5.4 Function Overloading- is a way implement Polymerphism
-Function overloading-compiler time polymerphism
if there is two fun with same name

-Operator overrloading-compiler time polymerphism
-Virtual fun-Run time polymerphism

include<stdio.h>
#include<conio.h>
float area(int);
int area(int, int);
main()
{
 int r,l,b,a;
 float A;
 clrscr();
 printf("enter value of r ");
 scanf("%d",&r);
 A=area(r);
 printf("area of circle is %f",A);
 printf("\nenter value of l and b");
 scanf("%d %d",&l,&b);
 a=area(l,b);
 printf("\narea of rectangle is %d ",a);
 getch();
}
float area(int R)
{
 return(3.14*R*R);
}
int area(int x,int y)
{
 return(x*y);
}



#include<iostream.h>
#include<conio.h>
int area(int, int); // @1
float area(int);    // $1
main()
{
 int r;
 float A;
 clrscr();
 cout<<"enter valur of r ";
 cin>>r;
 A=area(r);       // $2
 cout<<"\narea of circle is "<<A;
 int a,l,b;
 cout<<"\nenter valur of l and b ";
 cin>>l>>b;
 a=area(l,b);     // @2
 cout<<"\narea of rectangle is "<<a;
 getch();
}
float area(int R)
{
 return(3.14*R*R);
}
int area(int x,int y)
{
 return(x*y);
 }



 How fun overloading is resolved?

*First c++ tries to find an exact match. this is the case where the actual
argument exactly matches the parameter type of the one of the overload fun.
Exact Match:-
here @1 is same as @2 there is two argument pass in it.
and $1 is same as $2 there is one argument pass in it.

i.e. there should be some difference in the some difference in the argument
in two functions

*If no match find then c++ tries to  find a match through promotion
 -char, unsigned char and short is promoted to an int.
 i.e. char to change in int

 -float is promoted to double

*if no promotion is found, c++ tries to find a match through standard
 conversion


*/