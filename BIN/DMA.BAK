/*DYNAMIC MEMORY ALLOCATION

//sma-at compiling time
//dma-at runnning time


//in sma- no change is possible after declaration.
	- variable lifetime is decided(when we call the fun in which variable
	is made at this time variable exist and once use of fun is over then
	variable is destroyed(means memory releases).
	-all of these things decided at compile time.

//in dma-malloc()
	-calloc()
	-realloc()
	-free()
all of these fun allocate memory dynamically.

	-these fun memory releases when program ends
eg.

main()
{
 float *p;
 if() //we can also use condn for this if condn is true then malloc fun called
 p=(float*)malloc(4)
    //in malloc we give size according to requirement.
    //malloc returns address of void type.
    //here p is of float type so here we do type casting.
    //*p=(float*)malloc(4)
 *ptr=3.5;

 //when we call malloc fun it creates block of that size which we give
}

1. malloc()
-it takes one argument as size.

eg.
	flaot *ptr;
	ptr=malloc(4);  //malloc(size)
	*ptr=3.5;(way of deciding)

2. calloc()
-it takes two arguments first as array and second as size
eg.
	int *p;   //sma
	p=calloc(5,2); //calloc(array,size)
	*(p+0)=34;
	*(p+1)=55; way of deciding


3. realloc()
if we want to resize the block which is created using malloc and calloc then
we use realloc.
eg.
	flaot *ptr;
	ptr=malloc(4);
	*ptr=3.5;

       void *realloc(void *block,int size)

       double *q;
       q=realloc(ptr,8); //ptr have address of variable's block
			  to which we want to resize
			  here ptr have previous eg address.

4. free()
sma's variable memory is allocated when fun is calling and its memorry is
releases once use of fun is over.
dma's variable memory is allocated but not releases even after use of fun
this memory releases when program is ended.


so free() is used for releasing memory of fun which are made with the help
of malloc, calloc and resize by use of realloc.

eg.

main()
{

}
void fun()
{
 int x; //local variable sma
 int *p;
 p=malloc(2); //its memory not releases after use of fun
 ....
 ...
 free(p); free(address of block of which memory we want to release)

}


  */







#include<stdio.h>
#include<conio.h>
float* malloc();
main()
{
 float *ptr;
 clrscr();
 ptr=(float*)malloc(4);
 *ptr=3.5;
 printf("%f",*ptr);
 getch();
}