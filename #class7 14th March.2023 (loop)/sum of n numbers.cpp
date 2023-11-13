// print 1st n natural numbers 



#include<stdio.h> 
int main ()
{
	int sum;
	int i,n;
	printf("Enter the value of n=");
	scanf("%d",&n);
	i=1;	
	while(i<=n)
	{
		sum=sum+i;		
		i++;	
    }
   	printf(" %d\n",sum); 
    return 0;
}

