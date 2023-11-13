//3. WAP to aarrange the numbers stored in the array so that it will display first all odd numbers, then even numbers.

#include<stdio.h>
int main()
{
	int a[5],i; 
	printf("Enter the array of the elements ");
    for(i=0;i<5;i++)
    {
    		scanf("%d",&a[i]);
	}
	printf("Even numbers are\n");
	  for(i=0;i<5;i++)
    {
   	    if (a[i]%2==0)
   	    printf("%d\n",&b[i]);
   	}
   	printf("Odd numbers are\n");
	  for(i=0;i<5;i++)
    {
   	    if (a[i]%2!=0)
   	    printf("%d\n",a[i]);
   	}
   	return 0;
}