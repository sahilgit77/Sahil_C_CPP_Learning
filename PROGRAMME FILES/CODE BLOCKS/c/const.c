/*
-if we want that we can read variable but we don't want to change then we
use const.
-const is a keyword in c language.
-const is a qualifier.
-this concept is borrowed from c++.
-const can be applied in structure,union,enumerator,typedef.
-if we don't initialize const varaible then it printf garbage value.


NOTE:- the qualifier const can be applied to the declaration of any variable
to specify that its value will not be changed.



//garbage value

#include<stdio.h>
#include<conio.h>
main()
{
    const int x;
    printf("x=%d",x);
    getch();
}



//we can change the value by using pointer


#include<stdio.h>
#include<conio.h>
main()
{
    const int x=5;
    int *p;
    p=&x;
    printf("x=%d",x);
    ++(*p); //x=*p but ++x=error & ++(*p)=right bcz const is defined with x not p
    printf("\nx=%d",x);
    getch();
}



//pointer to const
const int *p=int const *p
both are same

#include<stdio.h>
#include<conio.h>
main()
{
    const int x=5;
   // const int *p; //pointer to const
    int const *p;
    p=&x;
    printf("x=%d",x);
    ++(*p); //we can do increament in pointer bcz here *p in const
    printf("\nx=%d",x);
    getch();
}



//const pointer




#include<stdio.h>
#include<conio.h>
main()
{
    const int x=5;
    int *const p=&x;
    printf("x=%d",x);
    ++(*p);
    printf("\nx=%d",x);
    getch();
}


*int *const p;//this is error bcz p is a const
    p=&x;  //and here we try to change value of p

*int *const p=&x;//this is right bcz we initialize this value.


//

#include<stdio.h>
#include<conio.h>
main()
{
    const int x=5;
    int *const p=&x;
    printf("x=%d",x);
    ++p;// we can't change p bcz it is const
    printf("\nx=%d",x);
    getch();
}


//const pointer to const

#include<stdio.h>
#include<conio.h>
main()
{

    const int x=5;
    const int *const p=&x;
    printf("x=%d",x);
    ++(*p);
    printf("\nx=%d",x);
    getch();
}

*/
