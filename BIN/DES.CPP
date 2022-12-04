/*vid-10.1 Destructor

-destructor is a instance member function of a class
-the name of the destructor is same as the name of the class but preceded
  tilde(~) symbol.
-destructor can never be static, has no return type.
-destructor takes no argument(no overloading possible)

Call of destructor.
-it is invoked implicity when object is going to destroy.


why destructor?
-it should be define to release resources allocated to an object.

-if we don't make destructor then compiler make destrcutor if we make
destructor then compiler don't make destructor


-destructor is last fun written in object when object going to destroy
then destructor automatically calls and the coding which we write in the
destructor executes.


*/

#include<iostream.h>
#include<conio.h>
class complex
{
 private:
  int a,b;
 public:

 ~complex()
  {
   cout<<"destructor";
  }
};
  void fun()
  {
   complex obj;
  }


main()
{
 clrscr();
 fun();
 getch();
}
