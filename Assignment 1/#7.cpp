//#7 find value of d when d=(a*++b/10) - --b


#include<stdio.h>
int main()
{
   int a=6,c=3,b=10, d=6;
   d=(a*++b/10)- --b;
   printf("%d",d);
   return 0;
}
