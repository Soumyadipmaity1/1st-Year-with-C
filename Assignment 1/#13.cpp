//#13  a++; b += a;  --c; d = 10 + a;  a*= a; d -= 4;



#include<stdio.h>
int main()
{
	int a=10, b=8, c=2, d=0;
	 a++; 
	 b += a;  
	 --c; 
	 d = 10 + a;  
	 a*= a; 
	 d -= 4;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    return 0;
}