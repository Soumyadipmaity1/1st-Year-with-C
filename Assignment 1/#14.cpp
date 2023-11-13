// #14 	a++ = --b + --c * ++d / 4 % 2 - 1/++c;


#include<stdio.h>
int main()
{
	int a=5, b=9, c=0,d=10;
    a= (--b + --c) * (++d / 4) % 2 - 1 ;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    return 0;
}