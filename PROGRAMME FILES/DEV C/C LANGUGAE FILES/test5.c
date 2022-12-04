/*
//vid-30.1
fwrite()-used to write content to the file in binary mode.

syntax

	int fwrite(void *buffer,int size,int count,file *ptr)
		
	
	
#include<stdio.h>
#include<conio.h>
struct book
{
	int bookid;
	char title[20];
	float price;
};
main(){
	struct book b1;
	FILE *fp;
	fp=fopen("myfile.dat","ab");
	printf("enter bookid, title and price");
	scanf("%d",&b1.bookid);
	fflush(stdin);
	gets(b1.title);
	scanf("%f",&b1.price);
	fwrite(&b1,sizeof(b1),1,fp);  //fwrite(addressof memory block, sizeofdata, number of records, file pointer)
	fclose(fp);
}
	


//vid-31.1 use of fread



	
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct book
{
	int bookid;
	char title[20];
	float price;
};
main(){
	struct book b1;
	int a;
	FILE *fp;
	fp=fopen("myfile.dat","rb");
	if(fp==NULL){
		printf("file not found");
		exit(1);
	}
//	while(fread(&b1,sizeof(b1),1,fp)>0)//fread return 1 and 0(1=content) and (0=no content)
//	{
//	printf("%d %s %f\n",b1.bookid,b1.title,b1.price);
//}
	a=fread(&b1,sizeof(b1),1,fp);
	{
		printf("%d",a);
	}
	a=fread(&b1,sizeof(b1),1,fp);
		printf("\n%d",a);
	a=fread(&b1,sizeof(b1),1,fp);
		printf("\n%d",a);
	fclose(fp);
}

*/




