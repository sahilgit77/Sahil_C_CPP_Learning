/* vid-17.1 METHOD OVERRIDING IN C++

Objective-

1) Method Overloading
2) Method Overriding- there is a fun in a parent class with name f1()
		      same fun is also exist in child class and arguments of
		      f1() have same in both class but there is difference of
		      coding, this is k/n as method overriding.

3) Method Hiding- there is a fun in a parent class with name f2() same fun is
		  also exist in child class but there is difference in there
		  arguments, this is k/n as method hiding.




#include<iostream.h>
#include<conio.h>
class A
{
 public:
  void f1()
  { }
  void f2()
  { }

};
class B: public A
{
 public:
  void f1() //Method Overriding
  { }
  void f2(int x) //Method Hiding
  { }
};
void main()
{
 clrscr();
 B obj;
 obj.f1();  // B type-due to inheritance methods of parent class also present in the child class
//but there is same f1() fun in both class so when we call f1(), it is
//compiler's duty that compiler run which f1(), so for this compiler see
//type of fun, so in obj.f1() here obj is of B type so it is find f1() in
// B class and executes this and this is k/n as early binding.
// obj.f2(); // Error-in this condn compiler trying to find f2() in B class but unable to find
	     // f2() (we f2() with no argument), then it gives error.
// obj.f2(4); // B type
// getch();
//}


//Note:- for fun overloading all fun with same name should be present in the
//       same class


*/


#include<iostream.h>
#include<conio.h>
class Car
{
 public:
  void shiftGear()
  { }

};
class SportsCar: public Car
{
 public:
  void shiftGear()
  { }
};
void main()
{
 SportsCar obj;
 obj.shiftGear();
 obj.shiftGear(); //SportsCar
 getch();
}

/* we want that if object is of Car then old defination of gear will run if
  object is of SportsCar then modified defination of Car will run so for this
  we do fun overriding.
  when we want to change in implementation of a service in the parent class
  then we do overriding  */