// 

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows and columns");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for (j=i;j<=n;j++){
		
		if(i==1||j==i||j==n)
		{
			printf("*");
		}
		else 
		printf(" ");
	}
	printf("\n");
		
	}
	return 0;
}
