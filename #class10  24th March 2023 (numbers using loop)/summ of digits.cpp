/// find out the digit and sum of the digit

#include<stdio.h>
int main()
{
	int i, n,sum=0;
	printf("Enter a number ");
	scanf("%d",&n);
	for (i=n;n!=0;n=n/10)
	{
		int r= n%10;
		printf("%d\n",r);
		sum =sum+r;
			
	}
       printf("sum =%d",sum);
	return 0;
}