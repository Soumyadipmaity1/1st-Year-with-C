// to reverse an array


#include<stdio.h>
int main()
{
	
	int n;
	printf("Enter value of order");
	scanf("%d",&n);
	int arr[n];
	int brr[n];
	int i;
	for (i=0;i<n;i++)
	{	
		scanf("%d",&arr[i]);
	
    }
	for (i=0;i<n;i++)
	{		
			brr[i]=arr[(n-1)-i];	
    }
		for (i=0;i<n;i++)
	{
	
		printf("the reverse pattern is %d\n",brr[i]);
	}
	return 0;
}