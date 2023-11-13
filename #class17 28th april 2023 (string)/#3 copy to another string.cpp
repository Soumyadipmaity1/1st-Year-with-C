// copy one string into other without using library funtion


#include<stdio.h>
int main()
{
	char a[15],b[15];
	scanf(" %s",&a);
	
	for(int i=0;i<15;i++)
	{
	 b[i]=a[i];	
	}
    printf("The copying string is  %s",b);	
	return 0;
}