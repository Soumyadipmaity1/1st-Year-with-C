// #11  	a++; a += a;  --a; a = 10 + a; a *= a; a -= 4;


#include<stdio.h>
int main()
{
	int a=10;
	a++;
     a += a;
        --a;
    a = 7 + a;
     a *= a;
        a -= 3;
    printf("%d", a);
}