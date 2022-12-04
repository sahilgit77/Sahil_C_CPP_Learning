/* what is commmand line?
* ways to run your program
-using ide(like codeblocks,turbo dev etc.)
-by double click(getch() necessay to hold the screen
-using command line(using commmand prompt)

Arguments in main()
*take something nature of function
*actual and formal arguments
*main() may take arguments
who calls main()?

in command pronmpt
C:\Users\SAHIL\Desktop\PROGRAMME FILES\DEV C\C LANGUGAE FILES>cmdline 3 5

o/p
cmdline
3
5

argc for argument count

here
C:\Users\SAHIL\Desktop\PROGRAMME FILES\DEV C\C LANGUGAE FILES>cmdline 3 5

int argc =3 bcz it consider argument as string including name of file

char *argv[] -char array for string

NOTE:- you can pass arguments to the main function only when you are calling yuour program using command line.
*/
#include<stdio.h>
main(int argc, char *argv[i])
{
	int i;
	for(i=0;i<argc;i++){
		printf("\n%s",argv[i]);
	}
	getch();
}
