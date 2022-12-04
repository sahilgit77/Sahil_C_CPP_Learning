//writing in a file in c lang
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i;
	FILE *fp;
	//char s[]="hello students";
	char s[100]; //if we want to i/p from user
	fp=fopen("f1.txt","w");   //fopen("name of file","w");
	if(fp==NULL){
		printf("file cannot open");
		exit(1);
	}
	printf("enter a string\n");
	gets(s);
	for(i=0;i<strlen(s);i++)
		fputc(s[i],fp);
		getch();
	fclose(fp); //used for transfer data in file from buffer and release memory
	return 0;
}
