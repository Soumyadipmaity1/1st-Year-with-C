// print decimal to binary positive number using loop


#include<stdio.h>
int main()
{
	int a,r,binary,x,y;
	printf("enter number which you want to binary");
	scanf("%d",&a);
	while(a>0)
	{
	 binary= a%2;
	 a=a/2;
	printf("%d",binary);
	}
	return 0;
}