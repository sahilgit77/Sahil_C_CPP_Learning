#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
main()
{
 int marks,choice,a,b,sum,R;
 while(1)
 {
	clrscr();
	printf("\n1.check your reslt");
	printf("\n2.sum");
	printf("\n3.Remainder");
	printf("\n4.Exit");

	printf("enter your choice");
	scanf("%d",&choice);
 switch(choice)
 {
 case 1:
	printf("enter your marks");
	scanf("%d",&marks);
	if(marks>90)
		printf("merit");
	else if(marks>60)
		printf("first div");
	else if(marks>45)
		printf("second div");
	else if(marks>33)
		printf("third div");
	else
		printf("fail");
 break;
 case 2:
	printf("enter values of a and b");
	scanf("%d %d",&a,&b);

	printf("sum=%d",sum=a+b);
 break;
 case 3:
	printf("enter value of R");
	scanf("%d",&R);

	printf("remainder=%d",R%2);
 break;
 case 4:
	exit(0);
 default:
	printf("invalid choice");
 break;
 }
 getch();
 }
 }
