/*pointers-vid-14.1

//extended concept of pointers:-

#include<stdio.h>
int main()
{
	int x=5, *j, **k;
	j=&x;
	k=&j;
	printf("%d",**k);
	**k=9;
	printf("\n%d",x);
		return 0;
}


//x=5, *j;
j=&x;

here *j=x;
	  j=&x;

*/

/*vid-14.2

pointers arithmetic:-

* we can't add,multiply,devide two address.
eg. &p+&q, &p*&q, &p/&q=error;

* we can't multiplay or devide integer to address.
eg. &p/2,&p*2=error.


*we can add or subtract integer to/from an integer.

addition-

formula  pointer+n=pointer+sizeof(type of integer)*n.
eg. p=1000, n=2;
answer= p+2=1004;




//eg. addition

#include<stdio.h>
int main(){
	int x=2, *p;
	p=&x;
	printf("x=%d",x);
	printf("*\np=%d",*p);
	printf("\np=%d",p);
	p=p+1;
	printf("\np=%d",p);
	return 0;
}


subtraction-

formula  pointer1 - pointer2 = literal value/sizeof(type of pointer).
eg. p1= 1020, p2=1000;
answer= p1 - p2 = (1020 - 1000)/2  = 10;



*/
//eg. subtraction

#include<stdio.h>
int main(){
	int x=2, y=3, *p1, *p2,z;
	p1 = &x;
	p2 = &y;
	printf("x=%d\ny=%d",x,y);
	printf("\n&x=%d\n&y=%d",p1,p2);
	z = p1 - p2;
	printf("\nz=%d",z);
	
	return 0;
}


