/*
2. ARITHMETIC OPERATORS:- ( * / % + -)
*(having more priority)-    / % -
*(having lesser priority)-  + -

NOTE-if more than one operator of equal priority used in a equation
than these are solved by LEFT to RIGHT

eg. 3+4-7  here '+' will be solved before '-'(bcz + comes first in eqn).
eg. 3-4+7 here '-' will be solved before '+'.
NOTE:-if we perform operation b/w two integers
than result will be integers(rule of c language).  */


#include<stdio.h>
#include<conio.h>
main()
{
int x;
clrscr();
x=4*4/4+10%4-7;     /*here x is of int type thats why decimal are not stored in x
otherwise answer is 0.75 */
printf("%d",x);
getch();
}

/*
- 3/4     =0     if both are integer than result will be integer
- 3.0/4   =0.75  if we have atleast one real than result will be real
- 3/4.0   =0.75
- 3.0/4.0 =0.75
*/