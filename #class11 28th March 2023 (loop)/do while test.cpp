//do while loop merge with while loop and for loop


#include<stdio.h>
int main()
{
	int a=5;
	do{
		printf("In do while loop the Value is %d\n",a);
		a=a+1;
	}
	while (a<10);
int b=5;
    while (b<10)
    {    	
    		printf("In while loop the Value is %d\n",b);
    		b++;		
	}
	
	for (a=5;a<10;a++)
	{
			printf("In for loop the Value is %d\n",a);
	}
	return 0;
}