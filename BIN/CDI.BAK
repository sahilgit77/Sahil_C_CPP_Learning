/* vid=14.1

Construtor and Destructor in Inheritance

PART-1 Constructor in Inheritance-


Question-In Inheritance, when we create object of derived class, what will
	 happen?



#include<iostream.h>
#include<conio.h>
class A
{
  public:
  A()
  {
  }
};
class B: public A
{
 public:
  B():A() //contructor of parent class called //if we don't write then compiler wrrite this
  {
  }
};
void main()
{
 clrscr();
 B obj;
 getch();
}

question- when we make object of child class then constructor of child class
	  runs but child class also have members of parent class then how
	  constructor of parent class runs?
Rule- Constructor of child class calls constructor of parent class

Order of constructor run in case of inheritance-
-parent to child
when we call constructor of child class then constructor of child class calls
constructor of parent class runs execute the coding of the parent class's
constructor then execute the conding of child class constructor.

Order of calling constructor-
-Child to Parent


// calling parameterised construtcor in inheritance-


#include<iostream.h>
#include<conio.h>
class A
{
 int a;
  public:
  A(int k)
  {
   a=k;
   cout<<a;
  }
};
class B: public A
{
  int b;
 public:
  B(int x,int y):A(x)
  {
   b=y;
   cout<<"\n"<<b;
  }
};
void main()
{
 clrscr();
 B obj(2,3); //we want to pass 2 in b and 3 in a.
 getch();
}


if we make a parameterised constructor in the parent class then there is
  no default constructor in parent class then compiler trying to call
  default constructor this gives error.
  so in this condn we when we call parent class constructor then we pass
  value in this condn then it don't give error*/



/*
PART-2 Destructor in Inheritance-

*/

#include<iostream.h>
#include<conio.h>
class A
{
 int a;
  public:
  A(int k)
  {
   a=k;
   cout<<a;
  }
  ~A()
  {
  }
};
class B: public A
{
  int b;
 public:
  B(int x,int y):A(x)
  {
   b=y;
   cout<<"\n"<<b;
  }
  ~B()
  {
  }
};
void main()
{
 clrscr();
 B obj(2,3);
 getch();
}

/*

Order of destructor run(Execution) in case of inheritance-
-Child to Parent

Order of calling Destructor-
-Child to Parent

in destructor we pass no argument then it is optional to write destructor
even if do not make child destructor or we make child destructor and we make
no parent destructor then compiler automatically makes it