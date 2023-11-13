//#9   e++ = ++c + d-- = b-- * a++

#include<stdio.h>
int main()
{
	int a=5,b=4,c=1 , d=0,e=9;
	  e = ++c + d-- + b++*--a;
	printf("Final value is %d ",e);
	return 0;
}