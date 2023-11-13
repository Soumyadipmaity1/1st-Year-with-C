//sum of 3 digit in a number


#include<stdio.h>
int main() 
{
	int p;
	printf("Enter any  3 digit number  =");
	scanf("%d",&p);
	int sum= p/100+(p/10)%10+p%10;
	printf ("The sum of 3 digit is = %d",sum);
	return 0;
}