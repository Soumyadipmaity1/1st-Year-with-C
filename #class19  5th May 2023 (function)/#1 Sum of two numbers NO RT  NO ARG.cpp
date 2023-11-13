
#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int a,b,c;
    printf("\nEnter The Value of A & B :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nTotal : %d",c);
}
 