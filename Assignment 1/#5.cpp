//#5  find value of d when d=(++c - --b *++a)%2

#include<stdio.h>
int main ()
{
   int a=10,c=5,b=8, d=0;
   d=(++c - --b *++a)%2;
   printf("%d",d);
   return 0;
}
