//farhenhite to celcius

#include<stdio.h>
int main() 
{
	float p;
	printf("Enter the value in farenhite =");
	scanf("%f",&p);
	float celcius=(p-32)*5/9;
	printf ("The value in celcius scale is %f",celcius);
	return 0;
}