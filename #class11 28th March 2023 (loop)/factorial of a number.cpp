// factorial of a table  


#include<stdio.h>
int main()
{
  int i=1,n,fact=1;
  printf("enter last number of your table");
 scanf("%d",&n);
 for (i=1;i<=n;i++)
 {
 	fact=i*fact;
 	printf("The factorial of %d is %d\n",i,fact);
 } 	
 	return 0;
}