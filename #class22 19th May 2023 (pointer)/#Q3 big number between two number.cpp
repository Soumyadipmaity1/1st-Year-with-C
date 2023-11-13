// big number between two numbers using pointer

#include<stdio.h>
void ptr()
{
	int a,b,*p,*q;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	if (*p>*q)
	{
		printf("%d is the biggest ",*p);
	}else
		printf("%d is the biggest ",*q);
		
}
int main()
{
	ptr();
	return 0;
}