// NO arg and with retuen type

#include<stdio.h>
int add();
int main()
{
   add();
   return 0;
}
int add()
{
   int a;
   printf("\nEnter The number:");
   scanf("%d",&a);
   if(a%2==0)
   printf("EVEN ");
   else
   printf("odd");
   return a;
}     