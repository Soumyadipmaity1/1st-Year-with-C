//precedent of increment decrement operator in c



#include<stdio.h>
int main()
{
	int a=5,b=10,c=2 , d=0;
	 d= a++ + --b + ++c;
	printf("Final value is %d ",d);
	return 0;
}