//avg and total of 3 studets marks

#include<stdio.h>
int main() 
{
	int p, q,s;
	printf("Enter the marks are  =");
	scanf("%d%d%d",&p,&q,&s);
	float avg=(p+q+s)/3;
	printf ("The avg marks is %f\n",avg);
	int total=p+q+s;
		printf ("The total marks is %d",total);
	return 0;
}
