/*
//vid-51.0 wild pointer

main()
{
    int *p;
    *p=4;
    //here pointer points a unk/n location and 4 is assigned to that location
    //and this is illegel memory access bcz we don't know is this assigned to consumed
    //memory space or to a free memory space.
}


-if we do not initialize a pointer then garbage value represent a unpredictable
location.
-uninitialized pointer is k/n as 'wild pointer'.





//vid-51.1 NULL pointer

int *p=NULL;
-the pointer in which we assign NULL at the time of declaration is k/n as NULL pointer.
it is define in stdio.h as #define NULL 0.

every pointer has two type of address-
1) valid address- address of memory area which we reserved valid. address of a block in consume
memory area

2) invalid address- address comes from memory area in the pointer. address of a block in free
memory area

int *p=NULL;
if we put NULL then it become NULL pointer. and this avoid illegel memory access





//vid-51.2 void pointer

int *p; here 'int' denoted that pointer p returns address of a int block
float *q; here 'float' denoted that pointer q returns address of a float block

void *p; this generic pointer i.e. it can contain address of any type of block

eg.

void *p;

int x=10;
p=&x;

but we can't reperesent x=*p;
to represent this we need to do typecasting

*(*int)p=10

eg. void *p;
float q=3.4;

so
*(*float )p=3.4;


#include<stdio.h>
#include<conio.h>
main()
{
    void *p;
    int x=6;
    printf("x=%d",*(int*)p);
    getch();
}

*/


//vid-51.3 Dangling pointer

#include<stdio.h>
#include<conio.h>
void fun(void);
main()
{
    fun();
}
void fun()
{

    int *p; //p variable is exist in whole fun()
    {
        int x; //here x is exist only in this block and its scope and lifetime limited to this block
        p=&x;
    }
    /* so when this block is finished then x destroys and while p is still exist so now p contain
    invalid address of a location, so p is here k/n as Dangling pointer.
    here x before count in consumed memory space, so has valid address.
    after varaible is destroyed
    x is count in free memory space has a invalid memory space*/
}
