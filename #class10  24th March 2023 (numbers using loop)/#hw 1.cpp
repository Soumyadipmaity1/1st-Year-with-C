//write a program to read 3 values using scanf statement anf print the following results:
//1. Sum of values 
//2. avg of 3 values
//3. largest of the three
//4. smallest of the three

#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter 3 values = ");
	scanf("%d%d%d",&a,&b,&c);
	int sum= a+b+c;
	int avg= sum/3;
	printf("The sum is =%d \n",sum);
	printf("The avg is = %d\n",avg);
	if (a>b && a>c){
	
	printf("%d is the largest\n",a);
    }
    else if (b>a && b>c)
    {
    	printf("%d is the largest\n",b);
	}
	else 
    {
   		printf("%d is the largest\n",c);
	}
	if (a<b && a<c){
	
	printf("%d is the smallest\n",a);
    }
    else if (b<a && b<c)
	  {
    	printf("%d is the smallest\n",b);
	}
	else  
	  {
   		printf("%d is the smallest\n",c);
	}
		return 0;
}