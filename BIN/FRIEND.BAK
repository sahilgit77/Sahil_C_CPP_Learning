/*
vid-12.1 friend fun in c++
-1) friend fun is not a member function of a class to which it is a friend.
-2) friend fun is declares in the class with friend keyword.
-3) it must be defind outside to the class to which it is friend.
eg.

class complex
{
 friend void fun();
};
void fun()//void complex::fun //it should not be defined with membership lebal
{
 cout<<"sum is "<<a+b; //here a+b error bcz it can't access directly
}
main()
{
 clrscr();
 complex c;
 c.fun(); // error it has no caller object
}

features of friend fun-

-1.1) friend fun can access any member of the class to which it is friend.
-1.2) friend fun cannot access members of class directly.
-1.3) it has no caller object.
-1.4) it should not be defined with membership label.




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
  void show()
  {
   cout<<"a="<<a<<" b="<<b;
  }
  friend void fun(complex);

};
void fun(complex c)
{
 cout<<"sum is "<<c.a+c.b;
}
main()
{
 clrscr();
 complex c1;
 c1.setData(9,20);
 fun(c1);
 getch();
}


//vid-12.2
features of friend fun
*friend fun can become friend to more than one class


-member fun can access the variables of the class in which it made to access
 variable of another class it is not possible in member fun,
 so we friend fun for this bcz it can use member of more than one class at
 a time.



#include<iostream.h>
#include<conio.h>
class B; ///formal declaration class B
class A
{
 private:
  int a;
 public:
 void setData(int x)
 {a=x; }
  friend void fun(A,B);
};
class B
{
 private:
  int b;
 public:
 void setData(int y)
 { b=y;
 }
  friend void fun(A,B) ;
};
void fun(A o1,B o2)
{
 cout<<"sum is "<<o1.a+o2.b;
}

main()
{
 clrscr();
 A obj1;
 B obj2;
 obj1.setData(2);
 obj2.setData(32);
 fun(obj1, obj2);
 getch();
}



//vid-12.3
features
-overloading of operator as a friend fun.



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
   cout<<"a= "<<a<<" b="<<b;
  }
  friend complex operator+(complex,complex);
};
complex operator+(complex X,complex Y)
{
 complex temp;
 temp.a=X.a+Y.a;
 temp.b=X.b+Y.b;
 return temp;
}

main()
{
 clrscr();
 complex c1,c2,c3;
 c1.setData(3,4);
 c2.setData(5,6);
 c3=c1+c2;   //c3=operator+(c1,c2) read as + operates call and c1, c2 pass as arguments and returning value store in c3
 c3.showData();
 getch();
}


//vid-12.4 unary operator in friend function

#include<iostream.h>
#include<conio.h>
class complex
{
 private:
  int a,b;
 public:
  void setdata(int x,int y)
  {
   a=x,b=y;
  }
  void showdata()
  {
   cout<<a<<" "<<b;
  }
  friend complex operator-(complex);
};
complex operator-(complex X)
{
 complex temp;
 temp.a=-X.a;
 temp.b=-X.b;
 return temp;
 }
main()
{
 clrscr();
 complex c1,c2;
 c1.setdata(45,56);
 c2=-c1;      //operator-(c1);
 c2.showdata();
 getch();
}


//vid-12.5  overloading of insertion and extersion operator


#include<iostream.h>
#include<conio.h>
class complex
{
 private:
  int a,b;
 public:
  void setData(int x,int y)
  {
   a=x,b=y;
  }
  void showData()
  {
   cout<<"a="<<a<<" b="<<b;
  }
  friend ostream& operator<<(ostream&,complex);
  // we can't make object of ostream class so make reference of this class
  friend istream& operator>>(istream&,complex&);
  //here we make reference of complex bcz we want change in actual arguments
};
ostream& operator<<(ostream &dout,complex C)
{
 cout<<"\na="<<C.a<<" b="<<C.b;
 return(cout);
}
istream& operator>>(istream &din,complex &C)
{
 cin>>C.a>>C.b;
 return(cin);
}

main()
{
 clrscr();
 complex c1;
 cout<<"enter a complex number";
 cin>>c1;
/*explaination 1-
 cin is a object which call operator >> and c1 pass as an argument
 so we can write this as "cin.operator>>(c1);".
*this gives error bcz the class in which cin is object, in this class
 >> operator have more than one version, and there is some difference in the
 arguments one version to take int, one to take and one to take float etc as
 an argument and all these arguments are of primitive datatype and but there
 is no version to take argument of non-primitive data type argument
 (here complex). */
// cout<<"you entered";
// cout<<c1;
/* explaination 2-
 operator << calls and both cout and c1 pass as an argument
 so we can write this as "operator<<(cout,c1);". this is possible when we
 declare this as friend*/
// getch();
//}

/*


#include<iostream.h>
#include<conio.h>
class complex
{
 private:
  int a,b;
 public:
  void setData(int x,int y)
  {
   a=x,b=y;
  }
  void showData()
  {
   cout<<"a="<<a<<" b="<<b;
  }
  friend ostream& operator<<(ostream&, complex);
  friend istream& operator>>(istream&, complex&);
};
ostream& operator<<(ostream &dout, complex C)
{
 cout<<"\na="<<C.a<<" b="<<C.b;
 return dout;
}
istream& operator>>(istream &din, complex &C)
{
 cin>>C.a>>C.b;
 return din;
 }
main()
{
 clrscr();
 complex c1;
 cout<<"enter a complex number";
 cin>>c1; //operator>>(cin,c1);
 cout<<"you entered";
 cout<<c1; //operator<<(cout,c1);
 getch();
}
*/


//vid-12.6 member fun of one class can become friend of another class


#include<iostream.h>
#include<conio.h>
class A
{
 public:
  void fun();
  {......}
  void foo();
};
class B
{
 //if we want to make friend all fun of class A then we write this as
 friend class A;
 /*friend void fun();
 this is correct but there is possiblity that here fun() is function from
 no class, so to make friend of a specific class we add scope resolution
 operator so */
// friend void A:: fun();

};
