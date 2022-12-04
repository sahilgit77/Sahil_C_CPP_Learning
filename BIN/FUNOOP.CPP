/*
Fun in c++
												  int sum(int,int);
main()
{
....
....
 sum(a,b);
....
}
sum(int x,int y) //x and y are ordinary variables
{
..
}


-fun has a name, datatype and argument.
eg. int add(x)

-fun is a way to approach modularization(is a way to solve a big task by
dividing them into small tasks)



#include<iostream.h>
#include<conio.h>
// void fun(void); //global declaration means any fun can call fun()
//this is fun declaration
main()
{
 void fun(void); //local declaration means only main() can call fun()
 clrscr();
 cout<<"you are in main"<<endl;
 fun(); //this is fun calling
 getch();
}
void fun() //this region in k/n as fun defination
{
 cout<<"you are in fun";
}


-fun declaration is also k/n as fun prototype.
-fun need to be declared before use(like variable)/

		ReturnType functionName(argumentList);


//Take something, return something

actual arguments:- arguments which are passing while fun calling
formal arguments:- arguments which are declared while fun defination

#include<iostream.h>
#include<conio.h>
int sum(int,int);
main()
{
 int a=5, b=6;
 clrscr();
 int s=sum(a,b);//actual arguments sum() can't access a and b
 cout<<"sum="<<s;
 getch();
}
sum(int x,int y)//formal arguments sum fun can access x and y bcz these are
//declared in sum
{
 return(x+y);
}


Types of Formal Arguments:-

1) ordinary variables of any type
2) pointer variables
3) Reference variables


1) ordinary variables:-when formal arguments are ordinary variables, it is
k/n as function call by value or fun call by passing values

eg.

int sum(int,int);
main()
{
....
....
 sum(a,b); //we pass the value of variables
....
}
sum(int x,int y) //x and y are ordinary variables recieves value
{
..
}


2) pointer variables:-when formal arguments are pointer variables, it is
k/n as function call by address.

eg.

int sum(int *,int *);
main()
{
....
....
 sum(&a,&b); //we pass the address of variables
....
}
sum(int *p,int *q) //p and q are pointer variables recieves address
{
..
}


3) reference variables:-when formal arguments are reference variables, it is
k/n as function call by reference.

eg.

int sum(int &,int &);
main()
{
....
....
 sum(a,b); //we pass the reference of variables
....
}
sum(int &x,int &y) //x and y are reference variables contain reference
{
..
}

*/