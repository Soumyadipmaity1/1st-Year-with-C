#include<stdio.h>
int add(int *x, int *y);
int main()
{
	int a,b,sum;
	int add(int *, int *);
	printf("Enter the values");
	scanf("%d %d",&a,&b);
	sum=add(&a,&b);

}
int add(int *x, int *y)
{
	int z=*x+*y;
	printf("%d",z);
	return z;
}