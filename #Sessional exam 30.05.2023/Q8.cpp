// #8 Multiply two array

#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],i,j;
	printf("Enter 1st array elements:\n");
	for(i=0;i<2;i++)
	{
			for(j=0;j<2;i++)
			{
				scanf("%d",&a[i][j]);
			}
	}
	printf("Enter 2nd array elements:\n");
	for(i=0;i<2;i++)
	{
			for(j=0;j<2;i++)
			{
				scanf("%d",&b[i][j]);
			}
	}
	int m,n;
		 int multiply[m][n];
	printf("Multiplecation is: ");
		for(i=0;i<2;i++)
	{
			for(j=0;j<2;i++)
			{
			
				 multiply[m][n] = a[i][j] * b[i][j];
			}
	}
printf("%d", multiply[m][n]);
	return 0;
}