// student grade distribution using if else ladder


#include<stdio.h>
int main ()
{
	int marks;
	printf("Enter your marks out of 100 = ");
	scanf("%d",&marks);
	if(marks>=90)
	{
		printf("Grade 'O'");
	}
	else if(marks>=80)
	{
		printf("Grade 'A'");
	}
	else if(marks>=70)
	{
		printf("Grade 'B'");
	}
	else if(marks>=60)
	{
		printf("Grade 'C'");
	}
	else if(marks>=50)
	{
		printf("Grade 'D'");
	}
	else if(marks>=40)
	{
		printf("Grade 'F'");
	}
	else if(marks<40)
	{
		printf("Failed !!");
	}
	return 0;
 } 