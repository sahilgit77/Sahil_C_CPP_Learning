/* vid-16.1 new and delete keyword in c++

SMA(STATIC MEMORY ALLOCATION) vs DMA(DYNAMIC MEMORY ALLOCATION)

when we make declaration stmt at this time compiler decide that variales
and member take how much memory i.e. when program runs it is fixed that how
much memory they take so at the time program running we cant change memory
thats why it is called static memory allocation sometimes it is called as
compile time memory allocation.

so variables and object which are made in sma have fixed life and scope we
can't destroy  them before there life.

-by using declaration stmt we can make only sma variables.

-sma is benefitial where we already know that how much memory we needed.
 but if we have no idea that how much memory we required then we use dma.


C++ give us facility that we can make dma variable with the help of new
keyword. in C we use malloc calloc etc for creating dynamically variable but
using new keyword better than this in C++.

syntax-

syntax new

* int *p= new datatype


eg. int *p= new int

this creates a int type variable and there is no name of variables which is
made with the help of new. and new returns address which we recieve in pointer\

here p is sma type variable
and int type variable is dynamicallty created.

eg. float *q= new float

eg. complex *ptr= new complex;


we can make array with the help of new

eg. float *q= new float[5]

 or we enter a number

 int x;
 cin>>x;
 int *p=new int[x];




Delete- delete keyword used for releasing the memory which is made by new
	keyword. variable which is made in sma have fixed life and scope but
	variable which made in dma have no fixed life and scope so we use
	delete keyword to release there memory.


syntax delete-

- delete p; //deletes the memory of object,variable to which p pointes
- delete []p; //to release memory of array