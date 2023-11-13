// decimal to octal and hexadecimal


#include<stdio.h>
int main()
{
	int d,o,h;
	printf("Enter any decimal number ");
	scanf("%d",&d);
    o=d;
    h=d;
	printf("The converion of %d in octal is = %o\n",d,o);
	printf("The converion of %d in hexadecimal is = %x",d,h);
	return 0;
}