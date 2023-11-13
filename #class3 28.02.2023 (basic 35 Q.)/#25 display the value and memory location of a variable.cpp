//display the value and memory location of variables



#include<stdio.h>
int main()
{
    char p;
    int q;
    float r;
    printf("Enter a character ");
    scanf("%c",&p);
    printf("Enter an integer "); 
    scanf("%d",&q);
    printf("Enter a float ");
    scanf("%f",&r); 
    printf("%c is stored at address %u",p,&p);
    printf("%d is stored at address %u\n",q,&q);
    printf("%f is stored at address %u\n",r,&r);
    return 0;
}