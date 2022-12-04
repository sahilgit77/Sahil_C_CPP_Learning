/*

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
main()
{
int a,b,sum,multi,div,remainder,N,choice;

while(1)
{
clrscr();
printf("\n1. sum");
printf("\n2. multi");
printf("\n3. divide");
printf("\n4. remainder");
printf("\n5. Natural numbers");
printf("\n6. odd-even");
printf("\n7. Exit");

printf("\n enter your choice");
scanf("%d",&choice);

switch(choice)
{
case 1:
	printf("enter two numbers");
	scanf("%d %d",&a,&b);

	printf("sum=%d",sum=a+b);
	break;

case 2:
	printf("enter two numbers");
	scanf("%d %d",&a,&b);

	printf("multi=%d",multi=a*b);
	break;

case 3:
	printf("enter two numbers");
	scanf("%d %d",&a,&b);

	printf("div=%d",div=a/b);
	break;

case 4:
	printf("enter two numbers");
	scanf("%d %d",&a,&b);

	printf("remainder=%d",remainder=a%b);
	break;

case 5:
	printf("enter number");
	scanf("%d",&b);
	for(N=1;N<=b;N++)
{
	printf("%d\t",N);
}
	break;

case 6:
	printf("enter number");
	scanf("%d",&a);;

	a%2==0 ? printf("even"):printf("odd");
	break;

case 7: exit(0);

default:
	printf("invalid choice");
}
getch();
}
}


*/


#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
main()
{
int marks,choice;
while(1)
{
 clrscr();
 printf("\n1. Check");
 printf("\n2. Exit");

 printf("\nenter your choice");
 scanf("%d",choice);

 switch(choice)
 {
 case 1:
 printf("enter your marks");
 scanf("%d",&marks);

 if(marks>90)
	printf("grade a");
 else if(marks>80)
	printf("grade b");
 else if(marks>70)
	printf("grade c");
 else if(marks>60)
	printf("grade d");
 else
	printf("fail");
	break;

 case 2: exit(0);

 default:
	printf("invalid choice");
 }
 getch();
 }
 }