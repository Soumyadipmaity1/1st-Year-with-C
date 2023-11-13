/* The cost of one type of mobile sevice is Rs 250 plus
Rs 1.25 for each call made over and above 100 calls.
write a program to read customer codes and calls made 
and print the bill for each customer  */
 


#include<stdio.h>
int main()
{
	int a;
	char b;

		printf("Enter your name : ");

		scanf("%s",&b);
			printf("Enter your total ph calls = \n");
				scanf("%d",&a);
		printf("Dear customer your total mobile calls is %d\n",a);
	if(a>100)
	{
		float cost= 250+(a-100)*1.25;
			printf("Dear customer you cross your limit of 100 calls per recharge so you have to give extra charges of Rs. 1.25 for each call \n");
		printf("So your final telephonic bill is = %0.2f\n",cost);
	}
	else
	{
		printf("Your telephonic bill is = 250\n\n");
	}
		printf("Thank you !! Enjoy our services !!");
	return 0;
}