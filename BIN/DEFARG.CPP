// Default Arguments-we can set default value of a arguments

#include<iostream.h>
#include<conio.h>
int add(int,int,int=1);
void main()
{
 int a,b;
 clrscr();
/* cout<<"enter two numbers";
 cin>>a>>b;
 cout<<"sum is "<<add(a,b);      */
 int c;
 cout<<"\nenter three numbers";
 cin>>a>>b>>c;
 cout<<"sum is "<<add(a,b);
 getch();
}
int add(int x,int y,int z)
{
 return(x+y+z);
}