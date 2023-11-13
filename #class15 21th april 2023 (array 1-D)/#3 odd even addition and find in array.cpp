//odd even addding and find in array

#include<stdio.h>
int main()
{
	int n,sum=0,sum2=0;
	printf("please your number of elements");
	scanf("%d",&n);
	int arr[n];
	int i;
		printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		printf("Even numbers are\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
		
			printf("%d\n",arr[i]);
			sum=sum+arr[i];
		}
	
	}
		printf("Odd numbers are\n");
		for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
		
			printf("%d\n",arr[i]);
			sum2=sum2+arr[i];
		}
		
	}
	printf("The addtion of all even numbers is = %d\n",sum);
		printf("The addtion of all odd numbers is = %d",sum2);
	return 0;
}