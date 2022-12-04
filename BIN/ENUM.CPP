//Enumerators
/*
-it gives an opportunity to invent own datatype and define what values the
variable of this data type can take

enum month
{
 jan,feb,march,april,may,june,july,august,sep,oct,nov,dec //without ";"
};  //these are the possible values for the variable of month datatype

1.creating variables of enumerators


enum month
{
 jan,feb,march,april,may,june,july,august,sep,oct,nov,dec //without ";"
};

main()
{
 enum month m1,m2,m3;
}

-Internally compilers treats the enumerators as integers.

-Each value on the list of permissible values corresponds to an integer,
starting with oi. in example, jan is stored as 0, feb is as 1....dec is as 11.


2. Changing the default value of enum elements

enum month
{
 jan=1,feb,march,april,may=9,june,july,august,sep,oct,nov,dec //without ";"
};                       if we do this than june=10 automatically

main()
{
 enum month m1,m2,m3;
}

-we can initialize enumerators with different integers values.


Note:-You can write any program in c lang without the help of enumerations
but enumerations helps in writing clear codes and simplifying programme.

*/

#include<conio.h>
#include<stdio.h>

enum boolean
{
 false,true
};

enum boolean isEven(int x)
{
 if(x%2==0)
	return(true);
 else
	return(false);
}
void main()
{
 int n;
 enum boolean result;
 clrscr();
 printf("enter a number");
 scanf("%d",&n);
 result=isEven(n);
 if(result==true)
 printf("Even");
 else
 printf("odd");
 getch();
}