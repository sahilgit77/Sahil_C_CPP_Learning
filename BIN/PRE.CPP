/*#include<stdio.h>
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

*/

#include<stdio.h>
#include<conio.h>
#define country 20
void main()
{
 #if country==pak
	printf("rupi");
 #elif country==bangladesh
	printf("taka");
 #else
	printf("rupee");
 #endif
 getch();
}