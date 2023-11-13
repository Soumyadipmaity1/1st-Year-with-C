//armstrong or not



#include<stdio.h> 
int main ()
{
	int i,n,c,sum;
	printf("Enter a number ");
	scanf("%d",&n);	
	c=n;
	while(n>0)
	{
	    int r=n%10;
		sum=sum+ 1r*r*r;
		n=n/10;
	}
	if(c==sum)
	printf("Armstrong number");
	else
		printf("Not a armstrong number");
    return 0;
}

