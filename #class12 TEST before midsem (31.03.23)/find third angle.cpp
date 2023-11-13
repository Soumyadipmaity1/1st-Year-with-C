//find third angle

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two angle");
	scanf("%d%d",&a,&b);
	c=180-(a+b);
	printf("the value of third angle is %d",c);
	return 0;
}