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
   int a,b,c;
   printf("\nEnter the number:");
   scanf("%d",&a);
   if(a%2==0)
   printf("EVEN ");
   else
   printf("ODD");
      return a;
}      