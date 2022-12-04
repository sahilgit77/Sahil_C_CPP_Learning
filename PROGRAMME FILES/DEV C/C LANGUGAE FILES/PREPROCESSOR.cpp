/*
#include<stdio.h>
#define age 18
int main()
{
	#if age==20
		printf("true");
	#elif age==18
		printf("18");
	#else
		printf("false");
	#endif
	return 0;
}

#include<stdio.h>
#include<conio.h>
#define sum(a,b) a*b
main()
{
 int r;
 clrscr();
 printf("%d",sum((3+4),(4-1)));
 getch();
}





//preprocessor commands in c
- #if, #else, #elif, #endif

- #ifdef, #ifndef

- ##




#=preprocessor directive
include= preprocessor command


we .c file preprocessor converts it in a file to which compiler reads.

eg.
//file 1
#if
....
....
...
#endif

if condn with #if is true then preprocessor converts it in compilers file.


//eg.

//#if #else #endif

#include<stdio.h>
#define age 19
int main()
{
 #if age>=18
	printf("eligible for vote");
 #else
	printf("not eligible for vote");
 #endif
 return 0;
}


#if #elif #else #endif

#include<stdio.h>
#define NUMBER 0
int main()
{
	#if NUMBER>0
		printf("\n number is positive");
	#elif NUMBER<0
		printf("\n number is negative");
	#else 
		printf("\n number is zero");
	#endif
	return 0;
}





//#ifdef, #ifndef
#include<stdio.h>
#define COUNTRY "india"
int main()
{
	#ifdef COUNTRY
		printf("%s is a great country",COUNTRY);
	#endif
	#ifndef COUNTRY
		printf("i love my nation");
	#endif
	return 0;
}

*/

//##
#include<stdio.h>
#define ACTION(a,b) a##b+a*b
int main()
{
	printf("%d",ACTION(3,4));
	return 0;
}
