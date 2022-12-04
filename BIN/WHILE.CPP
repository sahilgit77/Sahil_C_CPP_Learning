/* CONTROL INSTRUCTIONS
1. DECISION CONTROL INSTRUCTION
2. ITERATIVE CONTROL INSTRUCTION
3. SWITCH CASE CONTROL INSTRUCTION
4. GOTO CONTROL INSTRUCTION

2.LOOPS IN C/ITERATIVE CONTROL INSTRUCTIONS/REPEATITIVE CONTROL INSTRUCTION\
when we want to repeat some lines or set of lines in program at this time
we use LOOP.

there is 3 ways to implement loop in c
*while
*do while
*for

*/

/*1.

#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
printf("SAHIL KHATRI");
getch();
}

if we want to print the name 5 times then we need to write name 5 times
in printf or we need to write printf("sahil"); 5 times.
so by using while loop we can do this without writing 5 times


*/

/* body of while loop

#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
while(condition)
{
printf("SAHIL KHATRI");
}
getch();
}
it is looks like if but difference is in 'if'condn is true then printf will run.
but in while there is condn and loops will be running until the the condn will
not be wrong. so if condn is true then loop becomes infinte loop

eg.(1<=5) this become infinite loop bcz 1 and 5 both are constants so we need
to change condn everytime.this is possible if we us variable in condn

*/
//2.


#include<stdio.h>
#include<conio.h>
main()
{
int i=1;  //INITIALIZATION  //the variable which is used for control the loop is k/n as COUNTER VARIABLE
clrscr();
while(i<=5) //condition
{
printf("\nSAHIL KHATRI");
i++;        //flow
}
getch();
}