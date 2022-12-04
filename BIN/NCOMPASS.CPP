/*  *. COMPOUND ASSIGNMENT OPERATOR

  if x=5
- +=
  eg. x+=4 // x=x+4 o/p=9 value of x incresed by adding 4.
     1) x+=4 and 2) x=x+4 both are different bcz in 1) case there only
     one operator and in 2) case there is two operator.


- -=
  eg. x-=4 // x=x-4 o/p=1

- *=
  eg. x*=4 //x=x*4 o/p=20

- /=  if x=5
  eg. x/=5 // x=x/5 o/p=1

- %=
  eg. x%=4 // x=x%4 answer= remainder o/p=1

- &=
  eg. x&=4 // x=x&4 o/p=4  detailed understandings in respective files.

- |=
  eg. x|=4 // x=x|4 o/p=5

- ^=
  eg. x^=4 // x=x^4 o/p=1
*/


#include<stdio.h>
#include<conio.h>
main()
{
int x=5;
clrscr();
x^=4;
printf("%d",x);
getch();
}