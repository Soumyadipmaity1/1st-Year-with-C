// Display the name of the day when you will enter serial number of that day using switch 




#include<stdio.h>
int main ()
{
	int day;
	printf("Enter serial number to display the name of the day = ");
	scanf("%d",&day);
	if (day>7 || day<1)
	{
		printf("ENTER serial number between 1-7");
	}
	else
	{
	
	 switch(day)
	 {
	
			case 1:
			printf("Hey its MONDAY");
			break;
			case 2:
			printf("Hey its TUESDAY");
			break;
			case 3:
			printf("Hey its WEDNESDAY");
			break;
			case 4:
			printf("Hey its THRUSDAY");
			break;
			case 5:
     		printf("Hey its FRIDAY");
     		break;
     		case 6:  
			printf("Hey its SATURDAY");
			break;
			case 7:		
			printf("Hey its SUNDAY");
   	}
  }
			
		return 0;
}
		