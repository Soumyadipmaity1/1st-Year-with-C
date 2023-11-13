// demonstrate the urary operator a++ --a


#include<stdio.h>
int main()
{
	int b,a=5;
	//printf("Enter number");
//	scanf("%d",&c);
	b=a++ + ++a - a--;
	printf("now the value is %d",b);
	return 0;
}