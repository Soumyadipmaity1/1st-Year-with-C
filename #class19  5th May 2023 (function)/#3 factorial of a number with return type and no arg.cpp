//// NO arg and with retuen type

#include<stdio.h>
int add();
int main()
{
   printf("the factorial is %d",add());
   return 0;
}
int add()
{
   int a,b,c=1;
   printf("\nEnter The number:");
   scanf("%d",&a);
   for(int i=1;i<=a;i++)
   {
   	c=c*i;
	  }
	     return c;
} 