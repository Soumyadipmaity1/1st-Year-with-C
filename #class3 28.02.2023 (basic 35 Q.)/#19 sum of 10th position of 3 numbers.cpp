// #19 sum of 10th position of 3 numbers

#include<stdio.h>
int main() 
{
	int p,q,r;
	printf("Enter any  3 number  =");
	scanf("%d%d%d",&p,&q,&r);
	int m=(p/10)%10;
	int n=(q/10)%10;
	int o=(r/10)%10;
	int sum=m+n+o;
	printf ("The sum of 10th position of 3 number = %d",sum);
	return 0;
}