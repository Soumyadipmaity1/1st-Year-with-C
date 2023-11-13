//#12  a = b + c * d / 4 % 2 - 1;


#include<stdio.h>
int main()
{
	int a=10, b=8, c=2, d=0;
	a = b + c * d / 4 % 2 - 1;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    return 0;
}