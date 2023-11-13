/* Write a program to compute the sum of digit
of a given integer numbers */


#include<stdio.h>
int main() 
{
	int n, sum=0;
	printf("Enter any integer number  =");
	scanf("%d",&n);
    while (n>0)
    {
    	int r= n%10;
    	sum= r+sum;
    	n=n/10;
	}
	printf ("The sum of digits is %d",sum);
	return 0;
}