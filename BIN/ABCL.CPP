/* vid -19.1 Abstract Class in C++

*Pure Virtual Function- A do nothing function is a pure virtual fun.
i.e. a fun which has no defination is k/n as Pure Virtual Fun.


ABSTRACT CLASS:- A class which contain pure virtual fun is k/n as Abstract
		 class.
		 we instantiate Abstract Class. i.e. we can't make a object of
		 Abstract Class.

Q-Why we make Abstract Class?
A-The purpose of an abstract class is to define a common protoco for a set
  of child classes. This is useful when defining objects that share code,
  abstract ideas etc.
  An abstract class have no instances. An abstract class must have atleast
  one pure virtual fun. In c++ pure virtual fun is declared but not defined.

*/



#include<iostream.h>
#include<conio.h>
class Person
{
 public:
 virtual void fun()=0; //pure virtual fun
/*
this shows that this fun has no defination if we call this fun by an object
then this giver error


Rule:-1) we don't make object of a class in which do nothing fun is exist.
Rule:-2) we will make child class of this class and do overriding of
	 do nothing fun.
Rule:-3) To avoid early binding and we don't want to call "do nothing" fun
	 base pointer, so we make this a virtual fun.
	 */
  void f1()
  { }
};
class Student: public person
{
 public:
  void fun() //for overriding
  {
  }
};
void main()
{
 clrscr();
 getch();
}