/* Functions in c
* Function-
	*piecce of code to accomplish certain operation.
	*it has a name for identification.
	*there are of two types-
		-predefined functions
		-user defined functions

 function is a piece of code i.e. this whole block represent by a function
 add() and isEven().
/*  in program we need to add numbers multiple times so we represent block of
  code of sum of numbers by a function add(). so now in program we don't
  to write program several times we do this operation by using add() in
  the program.




eg.1
add() //here we defined this add() as this full piece of code that is k/n
{      //as Function Defination.
 int a,b,c;
 printf("enter two numbers"):
 scanf("%d %d,&a,&b);
 c=a+b;
 printf("sum is %d");
}

eg.2

isEven() // these are user defined functions
{
 int a;
 printf("enter a number");
 scanf("%d",&a):
 if(a%2==0)
	printf("even")
 else
	printf("odd");
}


now we don't write complete code of sum and odd-even we  just use these
function add(); and isEven(); bcz these represents whole code



main() //this a predefined fun
{
 clrscr();
 add();    //here we call these fun to perform opeation(while we defined them
 isEven(); //before so this is k/n as Function Calling
 add();    //(a fun is execute when only if we call a fun)
 isEven();
}

*Technical Terms-
	-Function Defination
	-Function Declaration(Function Prototype)
	-Function call
*/






/*


eg.
main() // execution of a function always start by main() fun
{
1- a();  //here we call function not defined them
2- b();
3- a();
}
 a()
 {
  printf("\nhello");
 }
 b()
 {
  a(); //here  b() call a()
 }


Summary of this program-
*first main() fun calls fun a() and now control go to fun a() and enter in its
defination and prints" hello" at o/p screen
.
*now use of a() over it go to line 2 here it calls fun b() and now control
go to defination of b() and fun b() also calling a() in its defination  it now
again print "hello" on o/p screen.

*now use of b() over and now main calls a() in line 3 and it again printing
"hello" on o/p screen.(main() takes memory in RAM while running and all other
funs takes memory in RAM at the time of its calling and release the memory as
soon as its execution is completed)


o/p
hello
hello
hello


rule 1- we can many function as we want there is no limit of making function
	no function will defined inside a function, function.
rule 2- any function can call any function.



Remember-
* program must have atleast one function.
* function names must be unique.
* function is an operation, once defined can be used many times.
* one main() function must be in the program.
* function consumes memory only when it is invoked and released from RAM
as soon as it finishes its job.


Benefits-
* Modularization
* Easy to read
* Easy to debug
* Easy to Modify
* avoids rewriting of same code over and over]\
* better memory utilization


*/

#include<stdio.h>
#include<conio.h>
main()
{
 void add(void);
 clrscr();
 add();
 getch();
}
void add()
{
  int a,b,sum;
  printf("enter two numbers");
  scanf("%d %d",&a,&b);
  printf("%d",sum=a+b);
}

