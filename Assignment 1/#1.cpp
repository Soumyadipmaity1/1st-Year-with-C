//#1 find c when c=++a + --b


#include<stdio.h>
int main ()
{
   int a=10,c=5,b=8;
   c= ++a + --b;
   printf("%d",c);
   return 0;
}
