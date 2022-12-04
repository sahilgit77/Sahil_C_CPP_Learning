/*
-take nothing, return nothing-

#include<stdio.h>
#include<conio.h>
void main()
{
void add(void);
clrscr();
add();
getch();
}
void add()
{
int x,y,c;
printf("enter two numbers");
scanf("%d %d",&x,&y);

printf("%d",c=x+y);
}

*/



//-take something, return nothing

#include<stdio.h>
#include<conio.h>
void add(int,int);
main()
{
 int x,y;
 clrscr();
 printf("enter value of x and y");
 scanf("%d %d",&x,&y);
 add(x,y);
 getch();
}
void add(int a,int b )
{
 int c;

 printf("c=%d",c=a+b);
}



/*takes nothing, returns something

#include<stdio.h>
#include<conio.h>
int add(void); //return type=int, add=fun name, (void)=no argument pass in the fun
void main()
{
int s;
clrscr();
s=add();  //the return value comes to the add() //to use this return value in main we declare a variable and we assign this return value in this variable

printf("s=%d",s); //c=a+b we can't printf("%d",c) bcz c is the data of other fun
getch();
}
int add()
{
 int a,b,c;
 printf("enter value of x and y");
 scanf("%d %d",&a,&b);
 c=a+b;		      //here don't print a value instead of it we return this value to a fun to which we call.
	return(c); //if a fun returns a value then it again come to the fun where we call it.

// printf("hello"); // by use of return keyword the value and control return to the fun calling. so this unreachable value
 }


-we can't return more than one value in return fun
eg. return(a,b,c); here it return value of c without error.
    return c; we can write like this after space
    return a+b; here it return value of a. to return value of c we write
    return(a+b) and we know c=a+b.



-take something, return something


#include<stdio.h>
#include<conio.h>
int add(int,int);
main()
{
 int x,y,s;
 clrscr();
 printf("enter value of x and y");
 scanf("%d %d",&x,&y);
 s=add(x,y);
 printf("s=%d",s);
 getch();
}
int add(int a,int b)
{
 int c;
 c=a+b;
 return c;
}



*/