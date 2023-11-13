//sum of 3 digit in a number


#include<stdio.h>
int main() 
{
	int p;
	printf("Enter any 3 digit number  =");
	scanf("%d",&p);
	int x= p/100;
	int first=x*x;
	int y=(p/10)%10;
	int second=y*y;
	int z=p%10;
	int third=z*z;
	printf("The sqare of each digit are= %d %d %d",first,second,third);
	return 0;
}