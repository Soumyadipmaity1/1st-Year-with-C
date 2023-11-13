#include<stdio.h>
int add(int x, int y);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int add=add(a,b);
	printf("The sum is %d",add);
	return 0;
}
int add(int  , int )
{
int x,y;	
	int add=x+y;
	return add(x+y);
}
