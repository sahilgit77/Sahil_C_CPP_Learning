#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("myfile.dat","w");
	if(fp==NULL){
		printf("file not found");
		return 0;
}
