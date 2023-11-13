// factorial of a number

#include<stdio.h>
int  main()
{
	int i,n,fact=1;
	printf("last number of the table");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		printf("The factorial of %d = %d\n",i,fact);
	
	}
		return 0;
}