// size of (data type;p
//sizeof(variable);
// sizeof(constant);

#include<stdio.h>
#include<conio.h>
main()
{
int f,a,b,c,d;
float k;
double d1;
char ch;
clrscr();
a=sizeof(f);
b=sizeof(k);
c=sizeof(d1);
d=sizeof(ch);
printf("%d\n%d\n%d\n%d",a,b,c,d);
getch();
}

/*
int-2 byte
float-4 byte
char-1 byte
double-8 byte
*/