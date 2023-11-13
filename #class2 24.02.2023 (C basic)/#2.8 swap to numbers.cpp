// swap to number

#include<stdio.h>
int main() 
{
	int p, q;
	printf("Enter first number = ");
	scanf("%d",&p);
	printf("Enter second number = ");
		scanf("%d",&q);
	int swap=p;
	p=q;
	q=swap;
	printf ("After Swap the first number is %d\n",p);
	printf ("After swap the second number is %d",q);

	return 0;
}

