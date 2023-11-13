// Display the name of the day when you will enter serial number of that day using if else ladder




#include<stdio.h>
int main ()
{
	int day;
	printf("Enter serial number to display the name of the day = ");
	scanf("%d",&day);
		if(day == 1)
	{
		printf("Hey its MONDAY");
	}
	else if(day==2)
	{
		printf("Hey its TUESDAY");

	}
	else if(day==3)
	{
		printf("Hey its WEDNESDAY");
	}
	else if(day==4)
	{
		printf("Hey its THRUSDAY");
	}
	else if(day==5)
	{
		printf("Hey its FRIDAY");
	}
	else if(day==6)
	{
		printf("Hey its SATURDAY");
	}
	else if(day==7)
	{
		printf("Hey its SUNDAY");
	}
	return 0;
 } 