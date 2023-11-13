//#8 calculate gross salary

#include<stdio.h>
int main() 
{
	int p, q, r;
	printf("Enter your basic salary, DA and HRA ");
	scanf("%d %d %d",&p,&q,&r);
	int gross=p+q+r;
	printf ("The Gross salary is %d",gross);
	return 0;
} 