// sum of all elements in array

#include<stdio.h>
int main()
{
	int marks[5],sum=0;
	printf("Enter marks ");
	for(int i=0;i<=4;i++)
	{
		scanf("%d",&marks[i]);
 	}

		for(int i=0;i<=4;i++)
	{
		sum=sum+marks[i];		
	}
		printf("The sum of the element is %d\n",sum);
	return 0;
}