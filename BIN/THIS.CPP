/* vid-15.1 This pointer in C

 Object Pointer:- A pointer which containn address of an object is called
 Object Pointer.


#include<iostream.h>
#include<conio.h>
class Box
{
 private:
  int l,b,h;
 public:
  void setDimension(int x,int y,int z)
  {
   l=x, b=y, h=z;
  }
  void showDimension()
  {
   cout<<"\nl="<<l<<"\nb="<<b<<"\nh="<<h;
  }
};
void main()
{
 clrscr();
 Box smallBox, *p;
 p=&smallBox;
 p->setDimension(12,10,15);
 p->showDimension();
 getch();
}



 when we call a object by a pointer then we use -> "airo operator" at the
 place of "." "dot".


*/

/*

this Pointer- this is a local object pointer in every instance member
	      function containing address of the caller object.

*this pointer can not be modify.

*It is used to refer caller object in member function.

*/


#include<iostream.h>
#include<conio.h>
class Box
{
 private:
  int l,b,h;
 public:
  void setDimension(int l,int b,int h)
  {
   this->l=l, this->b=b, this->h=h;
  }
  void showDimension()
  {
   cout<<"\nl="<<l<<"\nb="<<b<<"\nh="<<h;
  }
};
void main()
{
 clrscr();
 Box smallBox;
 smallBox.setDimension(12,10,15);
 smallBox.showDimension();
 getch();
}

/* void setDimension(int x,int y,int z)
  {
   l=x, b=y, h=z;
}
here x,y and z are local variable and l,b,h are instance member variable

if we change x,y,z into l,b,h then there is name conflict occure although
these both l,b,h are different
to resolve name conflict we use "this ->" */

