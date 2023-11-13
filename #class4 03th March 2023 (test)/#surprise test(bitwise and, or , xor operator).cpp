
// surprize test (bitwise &, |, ^ operator combined )
#include<stdio.h>
int main()
{
	int a , b , c=12, d=25;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	printf("ans = %d\n",(c&d));	
	printf("ans = %d\n",(c|d));
	printf("ans = %d\n",(c^d));
	
	printf("ans = %d\n",(a&b));
	printf("ans = %d\n",(a|b));
	printf("ans = %d\n",(a^b));
	return 0;
	
}