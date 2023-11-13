//#6 find value of c when c=++(a*b+1)

#include<stdio.h>
int main()
{
   int a=6,c=3,b=10;
   c=++c*(a*b+1);
   printf("%d",c);
   return 0;
}
