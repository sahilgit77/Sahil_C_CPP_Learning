#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main(){
	char str[10];
	FILE *fp;
	fp=fopen("f1.txt","r");
	if(fp==NULL){
		printf("file not found");
		exit(1);
	}
	while(fgets(str,9,fp)!=NULL){
		printf("%s",str);
	}
	fclose(fp);
	getch();
}
