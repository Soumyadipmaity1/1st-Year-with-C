// check palindrome no. or not using function

#include<stdio.h>
int palindrome(int n)
{
	int i,c,sum=0;
	printf("Enter a number");
	scanf("%d",&n);	
	c=n;
	while(n>0)
	{
	    int r=n%10;
		sum=r+(sum*10);
		n=n/10;
	}
	if(c==sum)
	return 1;
	else
    return 0;
}
int main()
{	
	printf("%d", palindrome(0));
	return 0;
}
