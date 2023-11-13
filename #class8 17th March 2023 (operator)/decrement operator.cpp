//decrement operator

#include<stdio.h>
int main()
{
	int a=10,b=0;

	printf("Final value of a is %d\n",a);	
	printf("Final value of b is %d\n",b);
	
	a= b--;                                   //post decrement

	printf("Final value of a is %d\n",a);	
	printf("Final value of b is %d\n",b);
	
	a=--b;                                    //pre decrement
	
	printf("Final value of a is %d\n",a);	
	printf("Final value of b is %d",b);
	return 0;	
}
