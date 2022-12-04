/*
#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,t;
 clrscr();
 printf("enter two number");
 scanf("%d %d",&a,&b);
 t=a;
 a=b;
 b=t;
 printf("a=%d and b=%d",a,b);
 getch();
 }

Actual and Formal Arguments

#include<stdio.h>
#include<conio.h>
void main(int,int);
main()
{
 int a,b;
 clrscr();
 fun(a,b); //this fun is sender //arguments which are passing at the time of calling
 .....	   //k/n as Actual Arguments.
 ....
}
void fun(int x,int y) //this fun is receiver. //arguments which are written at the
{                     //time of fun defining k/n as Formal Arguments.

}
*if we change value of x and y in fun defining then this will not change the
  value of a and b bcz every fun can access there fun own value.


//eg. write a function to swap two integers.

#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
main()
{
 int a,b,t;
 clrscr();
 printf("enter value of a and b");
 scanf("%d %d",&a,&b);
 swap(&a,&b);  // we needd pass the address
 getch();
 }
void swap(int *x,int *y)      // *x=a, *y=b
{
 int t;
 t=*x;	//t=x; this wrong bcz swapsvalue of x and y and x,y and a,b both have different funs
 *x=*y;	//x=y;
 *y=t;	//y=t;
 printf("a=%d and b=%d",*x,*y);
}

-Call by Reference
 * call by reference is same as call by address.
 eg. int x,y;
      fun(x,y); this call by reference.

 * when formal arguments are pointer variables,it is call by reference.
 * Reference means address.

 that is reason why we use &(address of) in scanf() bcz scan have pointers.




 //vid-15.2

 Objective- Pointer and Array

 array always consumes memory in continuous
 eg.   a[5];


		0	1	2	3	4
		()      ()	()	()	()
	       1000    1002    1004    1006    1008
	       each block have two bytes.

 in pointers

 int x,*p;        x              p
     p=&x;        ()       p+1   ()
     p=p+1;      2000            2002



//eg.pointer and array

#include<stdio.h>
#include<conio.h>
main()
{
 int a[5],i,*p;
 clrscr();
 p=&a[0];
 for(i=0;i<=4;i++)
 scanf("%d\n",p+i);
 for(i=0;i<=4;i++)
 printf("%d\n",(*p+i));
 for(i=0;i<=4;i++)
 printf("%u\n",(p+i));
 getch();
}


//eg. pointer and array

#include<stdio.h>
#include<conio.h>
void input(int *p)
{
 int i;
 for(i=0;i<=4;i++)
  scanf("%d",p+i);
}
void display(int *p)
{
 int i;
 for(i=0;i<=4;i++)
  printf(" %d ",*(p+i));
}
void sort(int *p)
{
 int round,t,i;
 for(round=1;round<=4;round++)
 {
  for(i=0;i<=3;i++)
  if(*(p+i)>*(p+i+1))
  {
	t=*(p+i);   //a[i]=*(p+i)
	*(p+i)=*(p+i+1);
	*(p+i+1)=t;
  }
 }
}
main()
{
 int a[5];
 clrscr();
 input(a);
 display(a);
 sort(a);
 display(a);
 getch();
}


//vid-15.3 pointer and string

#include<stdio.h>
#include<conio.h>
int length(char*);
char* reverse(char*);
main()
{
 clrscr();
 printf("%d",length("Computer"));
 printf("\n%s",reverse("Computer"));
 getch();
}
char* reverse(char *p)
{
 int l,i;
 char t;
 for(l=0;*(p+l)!='\0';l++);
 for(i=0;i<l/2;i++)
 {
  t=*(p+i);
  *(p+i)=*(p+l-1-i);
  *(p+l-1-i)=t;
 }
 return(p);
 }

int length(char *p)
{
 int i;
 for(i=0;*(p+i)!='\0';i++);
 return(i);
}


//vid-15.4
//program to reverse the string

#include<stdio.h>
#include<conio.h>
char* reverse(char*);
main()
{
 clrscr();
 printf("%s",reverse("Computer"));
 getch();
}

char* reverse(char *p)
{
 int l,i;
 char ch;

  for(l=0;*(p+l)!='\0';l++);
  for(i=0;i<l/2;i++)
  {
   ch=*(p+i);
   *(p+i)=*(p+l-1-i);
   *(p+l-1-i)=ch;
  }
 return(p);
}

*/
//vid-51.5 function pointer

#include<stdio.h>
#include<conio.h>
int f1(int);
main()
{
 int (*p)(int);
clrscr();
 p=f1;
 printf("%d",p(5));
 getch();
}

int f1(int x)
{
 printf("%d\n",x);
 return(x+1);
}
