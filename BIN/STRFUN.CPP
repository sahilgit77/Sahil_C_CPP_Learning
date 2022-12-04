/*
//use of strlen() fun

#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char a[15];
int l;
clrscr();
printf("enter the string\n");
scanf("%s",a);
l=strlen(a);      //l=strlen("hello");
printf("\n string length: %d",l);
getch();
}

//use of strcpy() fun


#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char a[15],b[15];
clrscr();
printf("enter the string\n");
scanf("%s",a);
strcpy(b,a);
printf("\n after copy: %s",b);
getch();
}

//use of concat() fun


#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char a[20],b[10];
clrscr();
printf("enter the first string ");
scanf("%s",a);
printf("\n enter the second string ");
scanf("%s",b);
strcat(a,b);
printf("\n after concat: %s",a);
getch();
}
  */
//use of strcmp()

#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char a[20],b[10];
int c;
clrscr();
printf("enter the first string ");
scanf("%s",a);
printf("\n enter the second string ");
scanf("%s",b);
c=strcmp(a,b);
printf("\n comparision result: %d",c);
getch();
}

first string = amir
second string = amit

strcmp

first string - ssecond string = difference of ascii code


//*/
