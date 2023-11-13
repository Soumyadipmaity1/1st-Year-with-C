/// Amstrong or not

#include<stdio.h>
int main()
{
	int  n,sum=0;
	printf("Enter a number ");
	scanf("%d",&n);
	int c=n;
	for(int i=n; i>0;i=i/10)
	{
		int r= i%10;
		sum =sum+(r*r*r);
				
	}
      if (sum==c)
      {
      	printf("Amstrong number");
	  }
       else
       printf("not a amstrong");
	return 0;
}