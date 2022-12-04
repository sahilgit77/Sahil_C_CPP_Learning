/* operator groups
UABRLCA
1. UNARY OPERATOR(required 1 operand) binary(2 operands) turnury(3 operands)
2. ARITHMETIC OPERATOR
3. BITWISE OPERATOR
4. RELATIONAL OPERATOR
5. LOGICAL OPRATOR
6. CONDITIONAL OPERATOR
7. ASSIGNMENT OPERATOR


1. unary operator
+,-,++,--,sizzeof()

*/

// ++ increment operator to increase the value by 1
// * x++ (post increment) having least priority even less than assigment operator
// * ++x (pre increment) having most priority

// -- decrement operator to decrese the value by 1

#include<stdio.h>
#include<conio.h>
main()
{
int x=3;
clrscr();
printf("%d",x);
x--; //x=x-1
printf("\n%d",x);
--x;
printf("\n%d",x);
x++;
printf("\n%d",x);
++x;
printf("\n%d",x);
getch();
}
