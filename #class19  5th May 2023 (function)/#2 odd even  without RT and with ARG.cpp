/// without RT and with argument 

#include<stdio.h>
void add(int);
int main()
{
    int a;
    printf("\nEnter The number:");
    scanf("%d",&a);
    add(a);
    return 0;
}
void add(int a)
{
   
   if (a%2==0)
   printf("EVEN");
   else
   printf("ODD");
}