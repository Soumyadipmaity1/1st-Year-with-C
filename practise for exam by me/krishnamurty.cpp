// krishnamurty 

#include<stdio.h>
int main()
{
	int i,n,r,k=0,fact=1;
	printf("any number");
	scanf("%d",&n);
	int c=n;
for(i=n;n!=0;n=n/10)
{
	r=n%10;

	
	for(i=1;i<=r;i++)
	{
		fact=i*fact;
	}
	k=k+fact;
}
  if (n==k)
{
	printf("krishnamurty");
	
}
else{

	printf("not a krishnamurty");
}
	return 0;
}