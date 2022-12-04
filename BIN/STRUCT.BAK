//vid-16.1

/*STRUCTURE:-
-structure is a way to group variables.
-structure is collection of disimilar elements.
-defining structure means creating new datatypes.


*DEIFNATION OF STRUCTURE-

SYNTAX-

struct tag
{
 //member variable declaration
};

eg.

struct date
{
 int d,m,y; //all elements are of similar type
};

eg.

struct student
{
 int roll no., age;
 char name[20];      //here elements are of different type
};
 //so structure is collection similar and disimilar type of elements.

Note:- no memory is consumed for defination of structure.

structure can be defined inside and outside in fun body.
if inside main fun -local defination
if outside main fun-global defination

eg.


struct date
{
 int d,m,y;
};
void main()
{
 float x;
 struct date today;
//here float and date are datatypes and x and today are variables.
//Note:-whenever we use a datatype which is made with the help of struct
keyword then we always use 'struct' keyword before using this.
}

struct date
{
 int d,m,y;
}d2,d3;  // we can define variable like this and these are global variable.
struct date d1; //we can define variable like this and these are global variable.
void main()
{
 struct date d1,today={26,7,2015};//we can initialize at the time of declaration

// if we want to initialize toady var after declaration.
today.d=26;
today.m=7;
today.y=2015;

//Note:-here d,m,y are member varibales and they have no individual identity
so can't write these like this-  eg. d=26; wrong
we can write like this           eg. today.d=26; right

//we can copy today values in d1.
d1.d=today.d;
d1.m=today.m;
d1.y=today.y;

or

d1=today;

//if we want take input form user.

}

#include<stdio.h>
#include<conio.h>


struct date
{
 int d,m,y;
};
void main()
{
 struct date today,d1;
 today.d=26;
 today.m=7;
 today.y=2015;

 d1=today;
 clrscr();

 printf("enter today's date");
 scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
 printf("DATE:%d/%d/%d",d1.d,d1.m,d1.y);
 getch();
}


//vid-16.2

//book data

#include<stdio.h>
#include<conio.h>

struct book
//here book is a datatype. and the variable which is made with the help of
//datatype book contain theree variables bookid,title,price.

{
 int bookid;
 char title[20];
 float price;
};
struct book input()
{
 struct book b;   //like int x;
 printf("enter bookid, title and price");
 scanf("%d",&b.bookid); //bookid is a member variable
 fflush(stdin); //to empty the buffer bcz
// when we use scanf at this time buffer takes input from keyboard and scanf
// takes input from 'input buffer'.
 gets(b.title);
 scanf("%f",&b.price);
 return(b);
}

void display(struct book a) //actual argument is of book type.
{
 printf("\n %d %s %f",a.bookid,a.title,a.price);
}
void main()
{
 struct book b1;
 clrscr();
 b1=input();
//input fun return value of book which we store in b1 and this fun is of
//takes nothing and return something nature.
eg. int s;
    s=sum();  type of s is int.
    so defination is "int sum();"
similarly
here
    b1=input(); type of b1 is 'book'
    so defination is "struct book input();" //bcz book is made with struct
 display(b1); //display is of takes something and return nothing nature
 getch();
}


//to print roll no., name ,and marks of student

#include<stdio.h>
#include<conio.h>

struct student
{
 int rn;
 char name[20];
 float marks;
};

struct student input()
{
 struct  student b;
 printf("enter your roll no., name and marks");
 scanf("\n%d",&b.rn);
 fflush(stdin);
 gets(b.name);
 scanf("\n%f",&b.marks);
 return(b);
}
void display(struct student c)
{
 printf("\n%d %s %f",c.rn,c.name,c.marks);
}
void main()
{
 struct student a;
 clrscr();
 a=input();
 display(a);
 getch();
*/

#include<stdio.h>
#include<conio.h>
struct date
{
 int d,m,y;
 char name[20];
};
void main()
{
 struct date a={26,7,2020};
 struct date b={"hameed"};
 clrscr();
 printf("%d %d %d",a.d,a.m,a.y);
 printf("%c",b.name);
 getch();
}