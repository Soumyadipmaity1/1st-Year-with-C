// prime

#include<stdio.h>
int  main()
{
	int i,n,c=0;
	printf("last number of the table");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if (c==2)
	{
		printf("prime");
	}
	else
		printf(" not a prime");
		return 0;
}