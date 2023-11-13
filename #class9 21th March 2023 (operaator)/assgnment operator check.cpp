// assignment operator


#include<stdio.h>
int main()
{
	int a=4, b=6, c=3, d=100;
	a+=b;          //shorthand ->  a=a+5 ; also b-=7 -> b=b-7
	printf("%d\n",a);
	b=c;
	printf("%d\n",b);
	c=d;
	printf("%d\n",c);
	d=a;
	printf("%d",d);
	return 0;
	
}