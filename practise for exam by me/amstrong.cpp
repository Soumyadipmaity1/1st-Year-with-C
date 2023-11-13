// amstrong



#include<stdio.h>
int main()
{
	int i, n,r,a=0,c;
	printf("enter any number");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
	    a=a+r*r*r;
		n=n/10;	
	}
	if(c==a)
	{
		printf("amstrong");
	}
	else
	printf("not  a amstrong");
	return 0;
}