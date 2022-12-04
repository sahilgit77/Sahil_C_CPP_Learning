/*UNION-
*union is similar to structure.
*defining structure means creating new datatype.

*struct						*union
struct item					union item
{						{
int x;						int x;
float y; 					float y;
char z;						char z;
};						};
struct item i1;					union item i1;

memory for i1 in struct				memory for i1 in union
2 byte for int                                  4 byte bcz of biggest variable
4 byte for float                                at a time any single variable
1 byte for char 				can store in this.
total 7byte(if we need all three variable at a time then we use structure)

NOTE:- union membbers are accessed in  the same manner as we access structure
member
*/

#include<conio.h>
#include<stdio.h>
union item
{
int x; float y; char z;
};
void main()
{
 union item i1;
 clrscr();
 i1.x=5;
 printf("x=%d\n",i1.x);
 i1.y=3.5;
 printf("y=%f\n",i1.y); //we can use a single variable only.
 i1.z='a';
 printf("z=%c",i1.z);
 getch();
}
