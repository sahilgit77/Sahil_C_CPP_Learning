/*vid-34.1

int x=5;

we can three data by showing this declration stmt:-
1. name
2. size
3. datatype

other properties:-
1. default value
2. storage
3. scope
4. Life

declaration stmt can be of 4 types and these types are defined as storage classes.
1. automatic storage class(by default) keyword-auto
2. register keyword keyword-register
3. static keyword-static
4. external keyword-extern

//eg.1 automatic storage class

storage class- automatic
keyword- auto
default value- garbage
storage- RAM
scope- limited to the in which it is declared
life- till the execution of the block in which it is declared

#include<stdio.h>
main()
{
	int x=5;
	printf("%d\n",x);
	{
		int x=2;
		printf("%d\n",x);
	}
	printf("%d",x);
}




//eg.2 register storage class

storage class- register
keyword- register
default value- garbage
storage- CPU register
scope- limited to the in which it is declared
life- till the execution of the block in which it is declared

#include<stdio.h>
main()
{
	register int x=4;
	int y;
	y=x++;
	x--;
	y=x+5;
	printf("%d\n%d",x,y);
}

//here x variable used many times so we use register sc for this bcz it does quick execution of instruction.



//eg.3 static storage class

storage class- static
keyword- static
default value- 0(zero)
storage- RAM
scope- limited to the in which it is declared
life- till the end of the program




#include<stdio.h>
void f1();
main(){
	f1();
	f1();
}
void f1()
{
	static int i;
	i++;
	printf("i=%d\n",i);
}

this program in automatic sc o/p= i=1, i=1 bcz life of the variable till the execution of the block in
 which it is declared so once block is executd then it is destroyed then again starts with fresh
 
whilst in static o/p= i=1, i=2 bcz life of the varibale till the end of the program so in first call i=1;
and in second call i=2.


//eg.4 external storage class

storage class- external
keyword- extern
default value- 0(zero)
storage- RAM
scope- Global
life- till the end of the program


*/


#include<stdio.h>
int x;//external declaration //not necesssary that we use extern int x; 
void f1();
main(){
	extern int x; //this is only for telling that the varaible which is outside is of external sc
	printf("x=%d\n",x);
	f1();
	printf("x=%d\n",x);
}
//int x; if we use it after it is necessary that we use extern int x; 
void f1()
{
	x++;
	printf("x=%d\n",x);
}
