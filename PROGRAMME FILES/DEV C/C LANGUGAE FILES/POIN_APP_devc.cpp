/* VID-15.1




#include<stdio.h>
void fun(int,int);
int main(){
	int a,b;
	printf("enter value of a and b");
	scanf("%d %d",&a,&b);
	fun(a,b); //arguments which are passig while calling is k/n as Actual Arguments.
	return 0;
}
void fun(int x,int y)//arguments which are written in fun defination is k/n as Formal Arguments.
{
	int z=x+y;
	printf("z=%d",z);
}



//NOTE:-A fun can't access variable of another fun.


main()
{
 printf.....
 scanf....
 fun(a,b);
}
 void(int x,int y)
 {
  printf
}

NOTE:- if we do change in the value of formal argument then  it won't affect value of actual arguments.
if we want to change value of actual arguments by formal arguments then we pass address of ordinary variables in
fun calling and in fun defination we declare pointers.


//write a fun to swap two integers.


//why we use & in scanf?
ans- bcz scanf has pointers which requires addresses and scanf has container which require content.

#include<stdio.h>
void swap(int*,int*);
int main(){
	int x, y;
	printf("enter value of a and b");
	scanf("%d %d",&x,&y);
	swap(&x,&y);
	return 0;
}
void swap(int *x, int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("\na=%d\nb=%d",*x,*y);
}




//Bubble Sorting]

Sorting- arranging datas in a logical order is k/n as Sorting.

cases-
-Numeric values- Ascending and Descending order.
-Alphanumeric values- in dictionary order.

Types of Sorting-

1) Internal Sorting- when a program runs it takes memory in the RAM and create variables for storing datas
by applying we sort these datas so this is k/n as Internal Sorting.

2) External Sorting- when size of program is big and we can't store these data in the variables of RAM then we
store these datas in HARDDISK and we use these datas in some pieces, so at this time technique we used for 
sorting is k/n as External Sorting.

Bydefault= sorting in ascending order.


in bubble sorting we have list of numbers we need to sort these numbers, so it starts comparision of two 
numberrs then next two numbers.


BUBBLE_SORT(A,N): A is array of values and N is the number of elemets.

if a[5]
then loops runs 4 times (n-1).
round runs 4times (n-1).
if A[i]>A[i+1} then swap A[i] and A[i1}.
return.


#include<stdio.h>
void bubble_sort(int[], int);
int main(){
 int A[]={5,34,29,8,7,34,6,45,743,4,1};
 int i;
 bubble_sort(A,11);
 for(i=0;i<=10;i++)	
 	printf("%d\n",A[i]);
 	return 0;
}
void bubble_sort(int A[],int N){
	int round,i,temp;
	for(round=1;round<=N-1;round++)	
		for(i=0;i<=N-1-round;i++)
			if(A[i]>A[i+1])     //for descending order A[i]<A[i+1}
			{
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
			}
}






//vid-15.2
//pointers and array

#include<stdio.h>
int main(){
	int a[5], *p, i;
	p = &a[0];
	for(i=0;i<=4;i++)
		scanf("\n%d",(p+i));
		//(p+i) = &a[i]
	for(i=0;i<=4;i++)
		printf("\n%d",*(p+i));
	for(i=0;i<=4;i++)
		printf("\n%d",(p+i));
	return 0;
}

//program to enter a array and use of fun and sorting


#include<stdio.h>
void input(int*);  //if we pass a in AA and *p in FA then in declaration void input(int[]/int*)for array5
void display(int*);
void sort(int*);
int main(){
	int a[5];
	input(a);
	display(a);
	sort(a);
	display(a);
	return 0;
}
void input(int *p)
{
	int i;
	for(i=0;i<=4;i++)
	scanf("%d",(p+i));
}
void display(int *p)
{
	int i;
	for(i=0;i<=4;i++)
	printf("\n %d",*(p+i));
}
void sort(int *p)
{
	int round,t,i;
	for(round=1;round<=4;round++)
	{
		for(i=0;i<=3;i++)
		if(*(p+i)>*(p+i+1))
		{
			t = *(p+i);
			*(p+i) = *(p+i+1);
			*(p+i+1) = t;
		}
	}
}



//vid-15.3- Application of pointers in c

//String Constant

String Literal = String Constant = String
printf("Computer");
char s[10] = "Computer";
printf(s);
strlen("Computer") = strlen("s") = strlen(&s[0])

p = 1000 = &s[0]

*/


#include<stdio.h>
int length(char*);
char* reverse(char*);
int main(){
	char s[10]="computer";
	int q;
	length(s);
	printf("%d",q);
	reverse("computer")
	printf("\n%s",);
	return 0;
}

char* reverse(char *p)  //to reverse  the string
{
	int i,l;
	char t;
	for(l=0;*(p+l)!='\0';l++)
	for(i=0;i<l/2;i++)
	{
		t = *(p+i);
		*(p+i) = *(p+l-1-i);
		*(p+l-1-i) = t;
	}
	return p;
}

int length(char *p)  //to calculate the length of the string
{
	int i;
	for(i=0;*(p+i)!='\0';i++)
	return i;
}
