#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	FILE *fp;
	fp=fopen("f1.txt","r");
	if(fp==NULL){
		printf("File not found");
		exit(1);
	}
	ch=fgetc(fp); //fgetc-to read char one by one
	while(!feof(fp)) {  //feof-end of file
		printf("%c",ch);
		ch=fgetc(fp);	
	}
	fclose(fp); //fclose-to close the file
}
