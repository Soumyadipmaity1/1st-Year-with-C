// array basic

#include<stdio.h>
int main()
{
	int a[5];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);	
	}
	int d;
	int x;
	int indx=-1;	
	printf("Enter the element which you find the index ");
	scanf("%d",&d);
	for(int i=0;i<5;i++)
	{
	if(a[i]==d)
	indx=i;
    }
    if (indx==-1)
    {
     printf("The element is not present ");	
	}
	else
    printf("The index of %d is %d ", d,indx);
	return 0;
}