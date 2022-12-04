/*vid-6.2
initialization at the declaration and after declaration

#include<iostream.h>
#include<conio.h>
#include<string.h>
struct book
{
 int bookid;
 char title[20];
 float price;
};
void main()
{
 clrscr();
 book b1={100, "C++ by Sahil", 450.6};//initialization at the time of declaration
// in c struct book b1 while c++ provide facility that write struct before
 variable is totally optional

 book b2,b3;
 b2.bookid=101;  //initialization after the declaration
 strcpy(b2.title,"C++ made easy");
 b2.price=300;

 b3=b2; //copying b2 in b3;
 cout<<b3.title;
 getch();
}



//vid-6.3
take input from user without inilializing

#include<iostream.h>
#include<conio.h>
#include<string.h>
struct book
{
 int bookid;
 char title[20];
 float price;
};
void main()
{
 clrscr();
 book b1;
 cout<<"Enter bookid,title,price \n";
 cin>>b1.bookid>>b1.title>>b1.price;
 cout<<b1.bookid<<"\n"<<b1.title<<"\n"<<b1.price;
 getch();

//if we take input by a fun and display y a fun


#include<iostream.h>
#include<conio.h>
#include<string.h>
struct book
{
 int bookid;
 char title[20];
 float price;
};

book input()
{
 book b;
 cout<<"Enter bookid,title,price \n";
 cin>>b.bookid>>b.title>>b.price;
 return(b);
}

void display(book c)
{
 cout<<c.bookid<<"\n"<<c.title<<"\n"<<c.price;
}

void display(book);
book input();

void main()
{
 book b1;
 clrscr();
 b1=input();
 display(b1);
 getch();
}



//vid-6.4

-Encapsulation- It is a method to combining all the variable, fun and
 properties related to a entity.

-c++ provide a facility that we can write fun and variable in struct
while in c we can write only variables





#include<iostream.h>
#include<conio.h>
#include<string.h>
struct book
{
 int bookid;
 char title[20];
 float price;
 void input()//it is a member fun can access all the variables of structure without '.'
 {
  cout<<"enter bookid, title and price";
  cin>>bookid>>title>>price;
 }
 void display()
 {
  cout<<"\n"<<bookid<<"\n"<<title<<"\n"<<price;
 }
};

void main()
{
 book b1;
 clrscr();
 b1.input(); //b1. indicates that input belongs to b1
 b1.display();
 getch();
}



//vid-6.5

problem:- There is several people work on a project
1st pereson work on main()
2nd on input fun()
3rd on struct

we decide that value of bookid!<0
way 1)
 printf("enter bookid");
 scanf("%d",&bookid);
 if(bookid<0)_
 {
  bookid=-bookid
 }

way 2)
main()
{
bookid=-100
}
in this condn there is no way that we can make bookid +ve.

NOTE:-Value of any variable in fun should be change by fun only bcz using
this chances of data corruption reduces

but in C++ we can do this by using

Access specifier: 1) Private
		  2) Protected
		  3) Public

 */



#include<iostream.h>
#include<conio.h>
#include<string.h>
struct book
{
 private://can't access from outside of the structure
  int bookid;
  char title[20];
  float price;
 public://can access from outside
  void input()
  {
   cout<<"enter bookid, title and price";
   cin>>bookid>>title>>price;
  }
  void display()
  {
   cout<<"\n"<<bookid<<"\n"<<title<<"\n"<<price;
  }
};

void main()
{
 book b1;
 clrscr();
 b1.bookid=-100;
 b1.input();
 b1.display();
 getch();
}