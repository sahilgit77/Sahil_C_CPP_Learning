/* vid-20.1 Template in c++

*Template:-
-The keyword template is used to define function template and class template.
	    
-it is a way to make your function or class generalize as far as datatype is
 concern.


*Template:-

-Function template:-
				  -function template is also k/n as generic function.
				  
	synatx:-
			template <class type> type fun_name(type arg,type arg)

-Class template

*/
/*
//eg. fun template

#include<iostream>
#include<conio.h>
using namespace std;

template <class X,class Y> //for more than one type of values
//this is generalised fun here template and class are keywords and X(place holder)
//is converting according to datatypes of passing values
X big(X a,Y b)
{
	if(a>b)
		return a;
	else
		return b;
}

int main()
{
	cout<<big(4,5);
	cout<<"\n"<<big(5,3.4);
	getch();
}

*/

// if we have to do fun overloading just bcz of there is coding and arguments are 
//same but there is different datatype, in this condn we can make a generalised version
//of fun. which is capable of taking values of different datatypes. we can do this by 
//making fun template. Fun template is also k/n as Generalised fun. 


