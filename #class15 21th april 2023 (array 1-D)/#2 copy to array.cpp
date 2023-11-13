// COPY TO another array 


#include<stdio.h>
int main()
{
	
	int n;
	printf("Enter no. of element ");
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
			brr[i]=arr[i];
					printf("the copy of pattern is %d\n",brr[i]);	
    }

	return 0;
}