#include<stdio.h>
#include<conio.h>
main()
{
int x,y,z;
clrscr();
x=sizeof(34); //here 34 is a integer and its size is 2 bytes
y=sizeof(3.56);

/*
real constants are bydefault of double type and consumes 8 bytes.
float is of single precesion like 7.1 and double is of double precesion
like 3.56 and having more accuracy
*/

z=sizeof('a');
printf("%d %d %d",x,y,z);
getch();
}