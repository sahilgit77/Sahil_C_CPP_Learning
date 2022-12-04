/* CONSTRUCTOR IN C++
-Constructor is a member fun of a class.
-the name of the constructor is same as the name of the class.
-it has no returntype, so can't use return keyword.
-it must be an instance member function, that is, it can never be static.

*how to call constructor?
-constructor is implicity invoked when an object is created. i.e. costructor
 is automatically called when object is created(after).
-constructor is used to solve problem of initialization.

Q- what is problem of initiailization?


Q-why it is called constructor?
ans- bcz constructor make object to an object
   constructor is a guarnteed fun which automatically called when object is
   created. so task which we want to perform when object is created, we write
   these task in constructor, especially initialization of member variable.



#include<conio.h>
#include<iostream.h>
class complex
{
 private:
  int a,b;
 public:
  complex()
  {
   cout<<"hello constructor";
  }
};
main()
{
 clrscr();
 complex c1,c2,c3;
 getch();
}



//vid-9.2
 Objective
 *default constructor
 *parameterized constructor
 *constructor overloading



#include<conio.h>
#include<iostream.h>
class complex
{
 private:
  int a,b;
 public:

  complex(int x,int y) //parameterized construtor //*1 calling from object
  {
   a=x, b=y;
  }
  complex(int k) //parameterized construtor //*2
//two constructor with same name this is k/n as constructor overloading.
  {
   a=k;
  }
  complex() //default constructor //*3
  {
  a=0, b=0;
  }
};
main()
{
 clrscr();
 complex c1(3,4),c2;
 getch();
}




 here
 constructor 1- for c1 and c5;
 constructor 2- for c2;
 constructor 3- for c3 and c4;



*object always calls constructor
-if we pass a value in an object then it is necessary that a constructor
 must take these values
	if there is no constructor then it gives error.

eg.     class complex
	{
	 ......no constructor
	}
	main()
	{
	 complex c1(3,4)
	}

	result-error bcz there is no constructor to take these values

-if we do not initialize object and if there is no constructor then there is
 no error bcz in this condn compiler automatically makes a default constructor

eg.     class complex
	{
	 ......no constructor
	}
	main()
	{
	 complex c1,c2
	}

	result-no error bcz in this condn compiler automatically makes a
	default constructor

-if we make even one constructor then compiler don't create default
constructor

eg.     class complex
	{
	complex(int x,int y)
	{.....
	}
	}
	main()
	{
	 complex c1(3,4),c2;
	}

	result-error bcz in this condn there is constructor for c1 but
	no constructor for c2 bcz compiler don't automatically make a
	default constructor if there is atleast one constructor.

NOTE-if there is no constructor in the class then compiler makes two
	constructors -default constructor and copy constructor

-if we make copy constructor in the class then compiler makes no constructor

-if we make no copy constructor then compiler makes copy constructor

-if we make no constructor then compiler make both constructor

*/

//vid-9.3 copy construtor

#include<conio.h>
#include<iostream.h>
class complex
{
 private:
  int a,b;
 public:

  complex(int x,int y) //parameterized construtor
  {
   a=x, b=y;
  }
  complex(int k) //parameterized construtor
  {
   a=k;
  }
  complex() //default constructor
  {
  a=0, b=0;
  }
  complex(complex &c) //copy constructor
  {
   a=c.a;
   b=c.b;
  }
};
main()
{
 clrscr();
 complex c1(3,4),c2,c(5);
 complex c4(c1); //we pass c1 in c4
 getch();
}



/*



  class complex
  {

   complex(complex &c) //copy constructor
  {
   a=c.a;
   b=c.b;
  }

  };
  main()
 complex c4(c1); //we pass c1 in c4

 in this condn c1 is pass in the c4 and in constructor it is stored as
 formal argument in c. after this c again call c1 and this resulting to
 recursion. that is error in c++

  here c become a object thats why it is called
  if we don't make a object then it is don't called so we make this
  reference
 */