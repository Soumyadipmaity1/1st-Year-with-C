// odd or even in funtion without arg and return type


#include<stdio.h>
void odd_even();
int main()
{
    odd_even();
    return 0;
}
void odd_even()
{
    int a;
    printf("\nEnter The Value of :");
    scanf("%d",&a);
    if (a%2==0)
    {
    	printf("even");
	}
	else
	printf("odd");
    
}
 