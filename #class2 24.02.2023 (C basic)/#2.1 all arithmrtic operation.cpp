//perform all the arithmetic operation


#include<stdio.h>
int main() 
{
	int p, q;
	printf("Enter the numbers are  =");
	scanf("%d %d",&p,&q);
	int sum=p+q;
	printf ("The sum is %d\n",sum);
	int sub = p-q;
	printf("The substraction is %d\n",sub);
	int multi=p*q;
	printf("The multiplecation is %d\n",multi);
	float div=p/q;
	printf("The division is %f\n",div);
	int mod=p%q;
	printf("The reminder is %d",mod);
	return 0;
}
