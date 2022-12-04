/* vid-18.1 virtual fun in c++

Base class Pointer:-
*Base class(parent class) pointer can point to the object of any of its
 descendant class.
 i.e. pointer in a parent class can contain address of object in all of its
 descendant classes.
*But its converse(opposite) is not true




#include<iostream.h>
#include<conio.h>
class A
{
 public:
  virtual void f1()
  { cout<<" sahil"; }
};
class B: public A
{
 public:
  void f1()
  { cout<<"hello"; }
  void f2()
  {  }
};
void main()
{
 clrscr();
 A *p, o1;
 B o2;
 p=&o2;
 p->f1();
//we want to run f1() of child class by pointer so we will not do early
//binding, here we dynamic/runtime/late binding so we make virtual to the
//f1() of class A(then compiler do late binding of this)
//in this condn pointers type is not consider as base while pointers content
//is consider as base
 getch();
}





//vid-18.2 virtual fun in c++

virtual fun working concept

*/

#include<iostream.h>
#include<conio.h>
class A
{
 public:
  * vptr
 public:
  void f1()
  { }
  virtual void f2()
  { }
  virtual void f3()
  { }
  virtual void f4()
  { }
};                                // vtable(for class A)
//contains addresses of virtual fun  f2, f3, f4
class B: public A
{
 public:
  void f1()
  { }
  void f2()
  { }
  void f4(int x)
  { }
};                                // vtable(for class B)
//contains addresses of virtual fun  f2, f3, f4
//here it points f2 of class B
//here it points f3 of class A which is inherited
//here it points f4 of class A which is inherited
void main()
{
 A *p, o1;
 p=&o1;
 p->f1(); //it is not virtual so EB= early binding.  f1() of A runs
 p->f2(); //it is virtual so LB= late binding. f2() of A runs
 p->f3(); // LB f3() of A runs
 p->f4(); // LB f4() of A runs
 p->f5(); // EB  //error no such fun
 getch();
}


// here pointer p contains address of o1 object, in this o1 object vptr
// exist which contain address of vtable of class A.


//eg.2

void main()
{
 clrscr();
 A *p;
 B o2;
 p=&o2;
 p->f1();  //EB //A-p is of A type so f1 of A runs
 p->f2();  //LB //B
 p->f3();  //LB //A
 p->f4();  //LB //A
 p->f4(5); //EB //B-there is no such fun in A so it gives error
 getch()
 }

//here p is of class A and object is of class B and p=&o2;and in this o2
// there is vptr contains address of vtable of class B

//in EB compiler makes base to the type of pointer
//in LB compiler makes base to the content of pointer

/*
-if there is  any virtual fun present in a class then compiler declare a
variable as a member in this class as "* vptr".
 we don't need to make again this variable for child class bcz this is exist
 in parent class and this is also available for child class.

-compiler make a static array as "vtable" and this array separately made for
 all descendants class and this is array of pointers.

-vtable contains addresses of virtual fun of that class

-vptr contains address of vtable.*/