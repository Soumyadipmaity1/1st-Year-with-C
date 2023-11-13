// palidrome no.

#include<stdio.h>
int main()
{
	int i, n,r,p=0,c;
	printf("enter any number");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
	    p= r+(p*10);
		n=n/10;	
	}
	if(c==p)
	{
		printf("palindrome");
	}
	else
	printf("not  a palindrome");
	return 0;
}