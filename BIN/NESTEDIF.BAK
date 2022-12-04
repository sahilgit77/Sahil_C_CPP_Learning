/* NESTED IF ELSE-
eg.1
if(some condition)
{
	if(some condition)         //if else in 'if' that is called nesting
	{

	}
	else
	{

	}
}
else
{


}

eg.2

if(some condition)
{

}
else
{
	if(some condition)
	{

	}
	else
	{

	}
}


*/
//which numbers graeter among three numbers
/*

1.

#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c);

if(a>b&&a>c)
	printf("%d",a);   // if we do if(a>=b&&a>=b); it is also wrong
if(b>a&&b>c)
	printf("%d",b);
if(c>a&&c>b)
	printf("%d",c);   ///not valid for equal greater value
getch();
}
*/


/*

//if we do

2.

#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c);

if(a>=b&&a>=c)
	printf("%d",a);  //if this condn is true
if(b>=a&&b>=c)
	printf("%d",b); // then this condn will bee wrong,and if this is wrong then else block will be executing and first if block also executing so this wrong
else
	printf("%d",c);
	getch();
	}
		*/


/*

4.

#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c);
			      3.
if(a>b&&a>c)	              //if(a>=b&&a>=c)                //if a is not greater number
	printf("%d",a);            //printf("%d",a);
else			      //else
{			      //{
 if(b>c)		      //if(b>=a&&b>=c)          //then this is checking but here checking of b>=a is waste of time
	printf("%d",b);		   //printf("%d",b);    //bcz a is not greater so this program is not efficient.
 else			      //else
	printf("%d",c);		   //printf("%d",c);
}			       //}
getch();      //in this program condn is checking 4 times so we can make this program in less condn checking
}

*/


/*5.

#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c);

if(a>b)                              //here condn is checking twice so it is most efficient program
{
	if(a>c)
		printf("%d",a);
	else
		printf("%d",c);
}
else
{
	if(b>c)
		printf("%d",b);
	else
		printf("%d",c);
}
getch();
}

  */


/*6. BY CONDITIONAL OPERATOR



#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c);

a>b ? a>c ?  printf("%d",a) : printf("%d",c): b>c ? printf("%d",b): printf("%d",c);
getch();
}


	       */	//or


//7.short form

#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("enter three numbers");
scanf("%d %d %d",&a,&b,&c);

printf("%d",a>b?a>c?a:c:b>c?b:c);
getch();
}
