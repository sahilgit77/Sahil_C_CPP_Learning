/* CONTROL INSTRUCTIONS

1. DECISION CONTROL INSTRUCTION
2. ITERATIVE CONTROL INSTRUCTION
3. SWITCH CASE CONTROL INSTRUCTION
4. GOTO CONTROL INSTRUCTION

3.SWITCH CASE CONTROL/SWITCH CONTROL IN C

syntax

switch(expression)
{
case constant 1:code;break;
case constant 2:code;break;
case constant 3:code;break;
case constant 4:code;break;
default:code;
}

rule 1-if switch(expression) code match with case constant 2:code then control
execute this code and after this control execute next code
i.e. case constant3 : code: and futher more without checking their codes.
so if we want to execute the code of one perticuler case then we use break;

rule 2-there is not necessary that all the cases are in a sequence order
they may be in a random order and we can write default keyword anywhere
and if we use default keyword in middle then we break after this.

rule 3-only constant will be use in after every case and we can't write any
expression or variable here.while in switch(expression) this expression we
can write variable and constant.

rule 4- switch case is used where we have many cases and we want execute
one of them.






eg. write a menu driven program with the following options:
1. addition
2. odd-even
3. printing first n natural numbers



#include<stdio.h>
#include<conio.h>
main()
{
 int choice,a,b,sum;
 clrscr();
 printf("\n1. Addition");
 printf("\n2. Odd-Even");
 printf("\n3. N natural numbers");

 printf("\nenter your choice ");
 scanf("%d",&choice);

 switch(choice)
 {
 case 1:
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum=%d",sum);
	break;

 case 2:
	printf("enter number");
	scanf("%d",&a);
	if(a%2==0)
		printf("number is even ");
	else
		printf("odd");
	break;

 case 3:
	printf("enter number");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
		printf("%d\t",b);
	break;
 default:
	printf("invalid choice");
 }
 getch();
 }

here after selecting any choice program is executing but end after this.
but we want if select a choice and executes and after this we again select
a choice and program runs until we want to exit this.

*/
//so for this we use a loop this loop runs until we exit this

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
main()
{
 int choice,a,b,sum;
 while(1)
 {
 clrscr();
 printf("\n1. Addition");
 printf("\n2. Odd-Even");
 printf("\n3. N natural numbers");
 printf("\n4. Exit");

 printf("\nenter your choice ");
 scanf("%d",&choice);

 switch(choice)
 {
 case 1:
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum=%d",sum);
	break;

 case 2:
	printf("enter number");
	scanf("%d",&a);
	if(a%2==0)
		printf("number is even ");
	else
		printf("odd");
	break;

 case 3:
	printf("enter number");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
		printf("%d\t",b);
	break;
  case 4: exit(0);  //here 0 indicates that it ends normally
 default:
	printf("invalid choice");
 }
 getch();
 }
 }



