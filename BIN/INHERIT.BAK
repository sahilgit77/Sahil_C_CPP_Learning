/*
//vid-13.1

 *Understand the need of Innheritance-
 -Class is used for describe properties and behaviour of an object.
 -property have name and values
 -behaviour means actions.



//Let us assume that we want to represent a car.
A class which contain these Properties and Methods represent a Simple Car.

Properties- 1. price
	    2. fuel type
	    3. engine
	    4. colour
	    5. capacity

Methods- 1.  setPrice
	 2.  setFuelType()
	 3.  setEngine()
	 4.  setColour()
	 5.  setCapcity
	 6.  getPrice()
	 7.  getFuelType()
	 8.  getEngine()
	 9.  getColour
	 10. getCapacity

While there is another Sports Car which represent by Class

Properties-this car have all the properties of Simple car and some extra
properties are given below
- alarm
- navigator
- safeGuard

Methods-this car have all the Methods(fun) of Simple car and some extra
Methods are given below
- setAlarm()
- setNavigator
- setSafeGuard()
- getAlarm()
- getNavigator
- getSafeGuard

Question- What we do to represent Sports Car?

Solution 1- we can write all these properties and methods in the class of
	 simple car, but due to this there will be no existance of simple
	 car.So this solution is rejected.

Solution 2- we can make different class with the name of SportsCar and we
	 write all of these methods and properties in this class, but there
	 is a problem in this solution we have to rework, and by doing this
	 cost and time of project increases and oops also proposes that reuse
	 existing work if we need. So this solution is rejected.

Solution 3- we can make a separate class SportsCar and we write in this class
	 which properties and methods which are different from SimpleCar.
	 i.e. we write all the common properties and methods in
	 SimpleCar class and extra properties which are not common we write
	 in the class of SportsCar. But to represent we make objects of class
	 but here sportscar need 8 properties to represent, So to represent
	 we make one object of simplecar which represent 5 properties and
	 and one object from SportsCar which represent 3 properties. But this
	 against the law of Encapsulation bcz encapsulation says we write
	 all the properties and methods related to a objects in one palace.
	 so this solution is also rejected.

Solution 4- we can make a separate class SportsCar and we write in this class
	 which properties and methods which are different from SimpleCar.
	 i.e. we write all the common properties and methods in
	 SimpleCar class and extra properties which are not common we write
	 in the class of SportsCar. But here we use a syntax which inharites
	 all the properties and methods of one class to another class.i.e.
	 in our case this syntax inherit(relates) the properties and methods
	 of SimpleCar to SportsCar. This relationship is unidirectional means
	 simplecar have its properties while sportscar have all the properties
	 bydoing this we follow encapsulation and don't do rework and we
	 write both the classes separately.


Inheritance-it is a process of inheriting properties and behaviours of
	   existing class into a new class.

	  - Existing class=Old class=Parent class=Base class
	  - New class=Child class=Derived class

Syntax:-

class Base_Class
{

};
class Derived_Class:Visiblity_Mode Base_Class
{
  //visiblity mode is access specifier
};


eg.

class Car
{

};
class SportsCar: public Car
{

};




//vid-13.2
Types of Inheritance
-Single Inheritance
-Multilevel Inheritance
-Multiple Inheritance
-Hierarchical Inheritance
-Hybrid Inheritance

-Single Inheritance-here one parent class and one child class

eg.

class A
{

};
class B:public A
{

};

-Multilevel Inheritance-Multilevel of inheritance.

eg.
class A
{

};
class B:public A
{
   B inherites from A
};
class C:public B
{
   C inherites from B and parent of C is B not A
};

-Multiple Inheritance-when a class inherites members of more than one class
this is known as multiple inheritance.

eg.

class A1
{

};
class A2
{

};
class B:public A1,public A2
{

};

-Hierarchical Inheritance- A single parent class have many child classes

eg.

class A
{

};
class B1:public A
{

};
class B2:public A
{

};


*Visiblity Modes-
-private
-protected
-public

Types of users of a class
	-User 1 will create object of your class
	-User 2 will derived class from your class
-Availablity vs Accessblity
	when object of our class is created then in this class all type of
member(private,protected and public) exists, i.e. all members get space in
memory.But we can access public member although private and protected members
also available there but public members are accessible.

Private-we make member private in the class bcz we want that both type of
users can't access members of our class,only we can access our private members
although these private members are available for both type of users.

Protected-if we want that user 1 can access our member but user 2 can't access
then we make this member protected.we can do this in vice-versa also.

Public-These members are visible for all type of users

Class A have members-private
		    -protected
		    -public
Class B is a child class of class A

1. in private mode:- class B can't access private members of class A but can
access private and protected members and in this mode these members become
as private members of class B.

2. in protected mode:-class B can't access private members of class A but can
access private and protected members and in this mode these members become
as protected members of class B.

3. in public mode:-class B can't access private members of class A but can
access private and protected members and this mode protected member of
class A become protected member in class B. and public member of class A
become public member in class B also.



#include<iostream.h>
#include<conio.h>
class A
{
 private:
  int a;
 protected:
  void setValue(int k)
  {
   a=k;
  }
  public:
  void showData()
  {
   cout<<a;
  }
};
class B: public A
{
 public:
  void setData(int x)
  {
   setValue(x);
  }
};
void main()
{
 clrscr();
 B obj;
 obj.setData(4);
 obj.showData();
 getch();
}



//vid-13.3
is a relationship

eg. Banana is a fruit
here Banana is a child class and fruit is a parent class
child class gets properties of parent class but parent class don't get
properties of child class. eg. all Bananas are fruit but all fruits are not
Bananas

eg. student is a person
here student is a child class and person is a parent class

relation b/w two classes is k/n as Association. types of Association
				-Aggregation
				-Composition
				-Inheritance


Note:-"is a" relationship is always implemented as a public inheritance




//eg.1 to understand private, protected and public inheritance

#include<iostream.h>
#include<conio.h>
class Car
{
 private:
  int gear;
 public:
  void incrementGear()//this is a service
  {
   if(gear<5)
    gear++;
  }
};
class SportsCar:public car
{

};
void main()
{
}


//eg.2 to understand private, protected and public inheritance.

STACK:- stack is vertical array in which value is inserting from top to bottom
i.e.

				a[4]
				a[3]
				a[2]
				a[1]
				a[0]

if we insert value first value goes in a[0] and now we can't insert value
directly in a[3].

NOTE: if we inherit a class publically then all the public members of parent
class become public member of child class also, and object of child class can
call this public member.



   */

#include<iostream.h>
#include<conio.h>
class Array
{
 private:
  int a[10];
 public:
  void insert(int index,int value)
  {
   a[index]=value;
  }
};
class STACK: private Array
{
 int top;
  public:
  void push(int value)
  {
   insert(top,value);
  }
};
void main()
{
 clrscr();
 STACK s1;
 s1.push(34);
// s1.insert(2,56);
 /*this is happen bcz we call insert fun which is made in parent class but
 this is a public fun and we inherit parent class publically so this is a
 public member in child class also. but this is against the STACK, stack says
 that inserted value go on top but it is directly go index 2. */

 /*if we inherit privately then it is a private member in child class and
 this is available for child class but object of child class can't access
 this.  */
 getch();
}

