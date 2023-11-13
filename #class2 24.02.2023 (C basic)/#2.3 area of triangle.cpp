//area of right angle triangle


#include<stdio.h>
int main() 
{
	float p, q;
	printf("Enter the base and hight = ");
	scanf("%f %f",&p,&q);
	float area=0.5*p*q;
	printf ("The area is %f",area);
	return 0;
}