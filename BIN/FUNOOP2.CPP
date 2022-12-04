/*
vid-5.2

benefits of fun
-easy to read
-easy to modify
-avoids rewriting of same code
-easy to debug
-better memory utilization-fun takes memory when only it is calling and
releases the memory after execution of memory.


NOTE:- fun saves memory but consuming time so

if a fun is big then it is takes time but it saves more memory so it is
benefitial.


but in case of small fun it takes time and saves small space of memory so
it is not benefitial




INLINE function:-
-To eliminate the cost of calls to small fun, c++ proposes a new feature
called inline fun
-An inline fun is a fun that is expanded in line when it is invoked
-compiler replaces the fun call with the coreesponding function code


INLINE converts fun in a one line command when it is called.

-inline is a request not a command

-benefit of speed of inline fun reduces as size of fun increases.

-so the compiler may ignore the request in some situation.
few of them are-

-function containing loops,switch,goto
-function with recursion
-containing static variabale

*/



#include<iostream.h>
#include<conio.h>
inline void fun();
void main()
{
 clrscr();
 cout<<"you are in main"<<endl;
 fun();
 getch();
}
void fun()
{
 cout<<"you are in fun";
}