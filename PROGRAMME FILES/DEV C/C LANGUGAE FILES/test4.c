#include<stdio.h>
#include<conio.h>
main(){
	char str[10];
	FILE *fp;
	fp=fopen("f1.txt","a"); //w-erase existing content then we write new content 
	//a-don't erase existing content and we can write new content
	printf("enter your name");
	gets(str);
	fputs(str,fp);
	fclose(fp);
}
