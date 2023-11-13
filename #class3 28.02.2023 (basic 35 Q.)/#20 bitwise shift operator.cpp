// bitwise shift operator



#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number for shifting ");
	scanf("%d",&a);
	int c=a<<3;
	int b=a>>3;
	printf("The bitwise right shift is %d\n", c);
		printf("The bitwise left shift is %d", b);
	return 0;
	
}  