//vid-35
//bit fields in c language

//bit fields are use to consume memory efficiently when we know that the value of a field or group of fields will
never exceed a limit or is within a small range.

//it can be used in structure and union

#include<stdio.h>
struct date
{
	unsigned int d:5 ;
	unsigned int m:4;
	unsigned int y;
}
main()
{
	struct date d1={22,1,2016};
	printf("size of d1 is %d",sizeof(d1));
}

date range 1 to 31 binary of 31 is 11111 i.e it requires 5 bit whilst for this 4 byte(32 bit) allocated so
this is waste of memory
similarly for month 1 to 12 binary 1100 4 bit
