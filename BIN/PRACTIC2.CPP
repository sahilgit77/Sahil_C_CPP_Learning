/*
-take nothing,return nothing

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
 int x,R;
 printf("enter value of x");
 scanf("%d",&x);

 printf("R=%d",R=x%2);
}

*/

/*
-take something,return nothing


#include<stdio.h>
#include<conio.h>
void add(int);
void main()
{
 int x;
 clrscr();
 printf("enter value of x");
 scanf("%d",&x);
 add(x);
 getch();
}
void add(int a)
{
 int R;
 printf("R=%d",R=a%2);
}

*/


/*
-take nothing,return something

#include<stdio.h>
#include<conio.h>
int add(void);
main()
{
 int s;
 clrscr();
 s=add();
 printf("s=%d",s);
 getch();
}
int add()
{
 int x,R;
 printf("enter value of x ");
 scanf("%d",&x);

 R=x%2;
 return(R);
}

*/

/*
-take something,return something


#include<stdio.h>
#include<conio.h>
int add(int);
main()
{
 int x,s;
 clrscr();
 printf("enter value of x");
 scanf("%d",&x);

 s=add(x);
 printf("s=%d",s);
 getch();
}
int add(int a)
{
 int R;
 R=a%2;
 return R;
}

*/

//eg.2



#include<stdio.h>
#include<conio.h>
int add(int,int);
main()
{
 int x,y,s;
 clrscr();
 printf("enter values of x and y");
 scanf("%d %d",&x,&y);
 s=add(x,y);
 printf("s=%d",s);
 getch();
}
int add(int a,int b)
{
 if(a>b)
  return a;
 else
  return b;
}