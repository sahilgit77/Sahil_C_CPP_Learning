/*Objective
-Static local variables(c)
-Static member variables
-Static member functions



//vid-8.1 to understand

1)static local variable
-concept is taken from c.
-they are bydefault initialized to zero.
-their lifetime is througout the program

eg.


#include<iostream.h>
#include<conio.h>
main()
{
 static int x;//bydefault zero
 int y;//garbage value
 clrscr();
 cout<<x<<"\n"<<y;
 getch();
}



  /*

//vid-8.1 to understand
2)staic member variable-also k/n as class member variable.
-declared inside the class body.
 ****variable inside a class which is made without static keyword is k/n as
 Instance member variable.

-they must be defined outside the class.
-static member variable does not belong to any object, but to the whole class.
-there will be only one copy of static member variable for the whole class.
-any object can use same copy of class variable.
-they can also used with same class name.

eg.

#include<iostream.h>
#include<conio.h>
class Account
{
 private:
   int balance; //instance member variable //exist in a1 object
   static float roi;
   //static member variable //class variable  //don't belongs to object
   //variable declaration and defination is outside of the class
 public:
   void setBalance(int b)
   {
    balance=b;
   }
};
float Account:: roi=3.5f;
//datatype of variable, Membership label:: name of variable=we can initialize

void main()
{
 clrscr();
 Account a1,a2;
 getch();
}





//to undestand
3)static member function
-they are qualified with the keyword static.
-they are called as class member fun.
-they can be invoked with or without object.
-they can only access static members of the class.

eg.             */

#include<iostream.h>
#include<conio.h>
class Account
{
 private:
   int balance; //instance member variable
   static float roi; //static member variable
 public:
   void setBalance(int b)
   {
    balance=b;
   }
  static void setRoi(float r)//static member fun-can call without object if we put static
   {
    roi=r;
   }
};
float Account:: roi=3.5f;

void main()
{
 clrscr();
 Account a1,a2;
// if static member is not private than we can access this as
// 1) by object
// a.roi=4.5;
// 2)without object
// Account::roi=4.5;*/


 //accessing in private-by creating member fun
 a1.setRoi(4.5f); //we call a instance member fun of account class(we need object a1)
 Account::setRoi(4.5f); //call static member variable without object
 getch();
}
