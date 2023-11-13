// multiplecation table

#include<stdio.h>
int main()
{
	int i,n,table;
	printf("enter a number");
	scanf("%d",&n);
	for (i=1;i<=10;i++)
	{
		table=n*i;
		printf("%d x %d = %d",n,i,table);
		
	}
	return 0;
}