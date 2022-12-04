/*vid-32.1
fprintf(fp,"%d(formated string)",a(expression/variable));


#include<stdio.h>
int main()
{
	FILE *fp;
	int a,b;
	fp=fopen("f1.txt","w");
	printf("enter value of a and b");
	scanf("%d %d",&a,&b);
	fprintf(fp,"sum of %d and % is %d",a,b,a+b); //to see o/p in a file instead of o/p screen
	fclose(fp);
	return 0;
}




//vid-33.1
fscanf() is used to read formatted content from file
reads data from the stream and stores them according to parameter format into the locations pointed by the
additional arguments.


syntax:-

fscanf(fp,"%d(format specifier)",&a(address of variable));



*/

#include<stdio.h>
int main()
{
	FILE *fp;
	int a,b,c;
	fp=fopen("f1.txt","r");
	fscanf(fp,"%d\n%d\n%d",&a,&b,&c);
	printf("a=%d b=%d c=%d",a,b,c);
	fclose(fp);
}
