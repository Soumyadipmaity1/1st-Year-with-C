// count the months and days from given no. of days


#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	
 int days;
 printf("Enter the number of days ");
 scanf("%d",&days);
 int month=days/30;
 int fdays=days%30;
 
 printf("The %d days = %d months and %d days ", days,month,fdays);
 return 0;
}