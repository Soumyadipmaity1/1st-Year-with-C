/* given a set of 10 two digits integers containing both 
positive and negative values, write a program using
for loop to compute the sum of all positive values 
and print the sum and the number of values added.
the program should terminate when the sum exceeds 999 */



#include<stdio.h>
int main()
{
    int i,n,sum=0;
	printf("Enter 10 two digits numbers including +ve and -ve");

	for(i=1;i<=10;i++)
	{
			scanf("%d",&n);
			if (n>0)
	    {
		  sum=sum+n;
	    }
	}
if (sum<=999)
	printf("The sum of all positive value is = %d",sum);
else
printf("Program is terminated");

	return 0;	
}