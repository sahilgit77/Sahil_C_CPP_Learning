/*
#include<iostream.h>
#include<conio.h>
void main()
{
 int sum(int, int);//this local declaration and only main fun can call it
 int a=5,b=6,s;
 clrscr();
 s=sum(a,b);//actual argument //no need of declaration
 cout<<"sum is"<< s;
 getch();

}
int sum(int x,int y)//formal declaration //we need declaration //call by value
{
  return (x+y);
}
*/
/*
Types of formal arguments-
1. ordinary variable of any type
2. pointer variables
3. reference variable

-when formal arguments are ordinary variables,it is function call by value.

-when formal arguments are pointer variable,it is function call by address.

-when formal arguments are reference variable, it is function call by reference.



#include<iostream.h>
#include<conio.h>
void main()
{
 int sum(int*, int*);
 int a=5,b=6,s;
 clrscr();
 s=sum(&a,&b);
 cout<<"sum is "<< s;
 getch();

}
int sum(int *x,int *y) //call by address
{
  return (*x+*y);
}




#include<iostream.h>
#include<conio.h>
void main()
{
 int sum(int&, int&);
 int a=5,b=6,s;
 clrscr();
 s=sum(a,b);
 cout<<"sum is "<< s;
 getch();

}
int sum(int &x,int &y) //call by address
{
  return (x+y);
}


5.2 video

#include<iostream.h>
#include<conio.h>
inline void fun();
void main()
{
 cout<<"you in main";
 clrscr();
 fun();
 getch();
}
void fun()
{
 cout<<"you are in main";
 }

	       */
 //default argument

#include<iostream.h>
#include<conio.h>
int add(int,int,int=0);
void main()
{

 clrscr();
 int a,b;
 cout<<"enter two numbers";
 cin>>a>>b;
 cout<<"sum is"<<add(a,b);
 int c;
 cout<<"\n Enter three numbers";
 cin>>a>>b>>c;
 cout<<"sum is"<<add(a,b,c);
 getch();
}
int add(int x,int y,int z)
{
 return(x+y+z);
}


/*if we set default value in an argument then we need to set default value in
  further more variable.
  eg. fun(int,int=0,int)x fun(int,int=0,int=0)