/*
//class
fun call by passing objects and returning objects-
compiler k/n how to bind the coding
eg. c3=c1+c2
in this eg. if c1 and c2 are of primitive type and then compiler bind their
coding
but in  case of if c1 and c2 are of non-primitive type their compiler gives
error bcz compiler don't know how to bind non-primitive coding.



Technical jargons

	-class is a description of an object.
	-object is an instance of a class.

*Instance member variable
 -attribute, data members, fields, properties

*Instance member functions-we say these as behaviour of object
 -Methods, procedures, action, opereations, services

*/


#include<iostream.h>
#include<conio.h>
class complex
{
 private:
  int a,b; //instance member variable
 public:
  void set_data(int x,int y) //instance member fun
  {
   a=x, b=y;
  }
  void show_data()
  {
  cout<<"\na="<<a<<" b="<<b;
  }
  complex add(complex c)
  {
   complex temp;
   temp.a=a+c.a;
   temp.b=b+c.b;
   return(temp);
  }
};
void main()
{
 clrscr();
 complex c1,c2,c3;
 c1.set_data(3,4);
 c2.set_data(5,6);
 c3=c1.add(c2);//c1 calls add(), c2 pass as ann argument and returning
 // value of add() stored in  c3
 c3.show_data();
 getch();
}
