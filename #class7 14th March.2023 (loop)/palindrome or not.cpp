//palindrome or not



#include<stdio.h> 
int main ()
{
	int i,n,c,sum=0;
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
	printf("Palindrome number");
	else
		printf("Not a Palindrome number");
    return 0;
}

