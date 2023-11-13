//celcius to farenhite


#include<stdio.h>
int main() 
{
	int p;
	printf("Enter the value in celcius");
	scanf("%d",&p);
	float farenhite=((p*9)/5)+32;
	printf ("The value in farenhite scale is %0.2f",farenhite);
	return 0;
}