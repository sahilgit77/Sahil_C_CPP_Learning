/*vid-7.1 Classes and Objects
-the only differencce b/w structure and classs is that,
	*The member of structure are bydefault public and members of class
	are by default private



//pgm to represent complex no. by using structure


#include<iostream.h>
#include<conio.h>
struct complex
{
 private:
  int a,b;
 public:
  void set_data(int x,int y)
  {
   a=x, b=y;
  }
  void show_data()
  {
  cout<<"\na="<<a<<" b="<<b;
  }
};
void main()
{
 clrscr();
 complex c1;
 c1.set_data(3,4);
 c1.show_data();
 getch();
}

*Class

-object consumes memory while class don't consumes any memory.

-varaible of a datatype which is made with the help of class k/n as OBJECT
 not variable.

eg.

 class book
 {
 ....
 };

 void main()
 {
  book b1;  here b1 is a object
 }



//pgm to represent complex no. by using class

#include<iostream.h>
#include<conio.h>
class complex
{
 private:
  int a,b;
 public:
  void set_data(int x,int y)
  {
   a=x, b=y;
  }
  void show_data()
  {
  cout<<"\na="<<a<<" b="<<b;
  }
};
void main()
{
 clrscr();
 complex c1; //c1 is an object
 c1.set_data(3,4); //noun.verb
//members fun can directly access the variable of the object by which
//they called.
 c1.show_data();
 getch();
}



//defining member fun outside  class
-if we define member fun outside the class then it is not considered as
member fun. If we want to make this member variable then need to do 2 things-

1)we have to decclare fun inside class *5
2)we have to put membership lebal(name of class) b/w return type and name of fun
eg. void complex:: set_data()
here void is a return type
complex is membership lebal(name of class)
set_data() name of fun

3) by this difference is if a fun is inside a class then it is bydefault inline
while if we write this outside the class then we to write inline in the
declaration.



#include<iostream.h>
#include<conio.h>
class complex
{
 private:
  int a,b;
 public:
 inline void set_data(int x,int y);  //5
  void show_data()
  {
  cout<<"\na="<<a<<" b="<<b;
  }
};
void complex:: set_data(int x,int y)
{
 a=x, b=y;
}
void main()
{
 clrscr();
 complex c1; //c1 is an object
 c1.set_data(3,4); //noun.verb
//members fun can directly access the variable of the object by which they called
 c1.show_data();
 getch();
}




#include<iostream.h>
#include<conio.h>
class complex
{
 private:
  int a,b;
 public:
  void set_data(int x,int y)
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
main()
{
 clrscr();
 complex c1,c2,c3;
 c1.set_data(3,4);
 c2.set_data(5,6);
 c3=c1.add(c2);
 c3.show_data();
 getch();
}


*/

