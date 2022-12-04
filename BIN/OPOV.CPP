/*vid-11.1
 Operator Overloading
-when an operator is overloaded with multiple jobs, then it is k/n as
 operator overloading.
eg.in above eg. we use "+" for addition and we also use "+" as fun.

-it is a way to implement compile time polymerphism.

Rules to Remember-
*Any symbol can be used as function name
 -if it is a valid operator in c lang
 -if it is preceded by "operator" keyword.

*you can overload sizeof and ?: operator.

//binary operator overloading


#include<iostream.h>
#include<conio.h>
class complex
{
 private:
  int a,b;
 public:
  void setData(int x,int y)
  {
   a=x, b=y;
  }
  void showData()
  {
   cout<<"\n"<<a<<" "<<b;
  }
  complex operator+(complex c)
  {
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
  }
}  ;

main()
{
 clrscr();
 complex c1,c2,c3;
 c1.setData(3,4);
/* c2.setData(5,6);c3=c1+c2 this is an error bcz compiler can add two variable if they are
 of primitive data type. eg. int a,b;    a+b
 but don't know how to add two variables if they are non-primitive datatype
 eg. here c1, c2 are of complex type*/
/* c3=c1+c2;
 c3.showData();
 getch();
}



*if we want give + name to a fun then we have to write operator before it
eg.
class complex
{
 complex operator +(complex c)
 {
 .....
 .....
 }
}
main()
{
 clrscr();
 ......
 c3=c1.add(c2)
 if we change add to +
 c3=c1.operator+(c2)
 also we can write this as
 c3=c1+c2;
 //here + is binary operator and in binary operator left side operand is
 considered as caller object and  right side operand as an argument.

 //this + symbol operationable only when if its operands are of complex type.
//reading as c1 calling + fun and passing c2 as an argument return store in c3
  i.e we don't need write "oprator" also we ddon't need to write "."
  and also we don't need to write ()//parantchus for argument.

}




//vid-11.2 unary operator overlaoding


#include<iostream.h>
#include<conio.h>
class complex
{
 private:
  int a,b;
 public:
  void setData(int x,int y)
  {
   a=x, b=y;
  }
  void showData()
  {
   cout<<"\n"<<a<<" "<<b;
  }
  complex operator-()
  {
    complex temp;
    temp.a=-a;
    temp.b=-b;
    return temp;
  }
}  ;

main()
{
 clrscr();
 complex c1,c2;
 c1.setData(3,4);
 c2=-c1;
 //also written as c2=c1.operator-() read as c1 calls "-" fun and no argument
 //is passing
 c2.showData();
 getch();
}

  */


#include<conio.h>
#include<iostream.h>
class integer
{
 private:
  int x;
 public:
  void setData(int a)
  {
   x=a;
  }
  void showData()
  {
   cout<<"\nx="<<x;
  }
  integer operator++()//pre increament
  {
   integer i;
   i.x=++x;
   return(i);
  }
  integer operator++(int) //post increament
  {
   integer i;
   i.x=x++;
   return(i);
  }
};
main()
{
 clrscr();
 integer i1,i2;
 i1.setData(3);
 i1.showData();
 i2=i1++;
// i2=i1.operator++();
 i1.showData();
 i2.showData();
 getch();
}


/*


#include<conio.h>
#include<iostream.h>
class integer
{
 private:
  int x;
 public:
  void setData(int a)
  {
   x=a;
  }
  void showData()
  {
   cout<<"\nx="<<x;
  }
  integer operator++()
  {
   integer i;
   cout<<"x="<<i.x;
  }
};

main()
{
 clrscr();
 integer i1,i2;
 i1.setData(3);
 i1.showData();
 i2=++i1;
 i1.showData();
 i2.showData();
 getch();
}

*/