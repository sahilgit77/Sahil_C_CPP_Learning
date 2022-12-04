// -Take Something,Returns Nothing
/*
-every fun has its own memory and own block. i.e. variable of a perticuler
 fun can't be accessible by other fun.
 eg.

 void main()
{
 int x,y; //here x,y are the variales of main() and it can't be access by add()
 clrscr();
 printf("enter two numbers");
 scanf("%d %d",&x,&y);

 add();
 getch();
}

*/

#include<stdio.h>
#include<conio.h>
void add(int,int); //this is global declaration and anyone can access this if this is inside the body then this is limited to there.
void main()
{
 int x,y;                    //here x,y are variables of main() and can't be access by add()
 clrscr();
 printf("enter two numbers");
 scanf("%d %d",&x,&y);

 add(x,y);                   //Actual Arguments | call by value // if we want to use x,y in add() we write x,y in add(x,y)
 getch();
}
void add(int x,int y)        //formal arguments  //we have to declare variable while declaratio
{
  int sum;                   //in take something we don't take data from printf and scanf(0
  sum=x+y;                   //here x,y can't use the data of x,y of main() but we want to main() fun's x,y access
  printf("%d",sum);
}
/*
-we are passing the value of x,y while calling add, fun so these values are
 copied in a and b. and these a and b are made in add() and data of main()
 copied in add.this is the way of supply(i.e. a fun can't access values of other fun
 but can take values of other fun).

-in body of add() fun we don't use printf, scanf bcz we already take values
 from main fun by using add(x,y)(while calling) and
 void add(int a,int b)(while declaration)
	so we perform addition on these x,y values.

-we also need to declare void add fun in the body of main() fun

-void add(int,int);          //here (int, int) indicate that whenever we call
 add fun in this fun two int type value will be write not more or less than two.
 and we also write two value defineing fun clrscr();
*/