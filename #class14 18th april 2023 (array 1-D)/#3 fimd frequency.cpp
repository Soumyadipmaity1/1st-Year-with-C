// find frequency
#include<stdio.h>
int main()
{
    int a[10];
    printf("ENTER ARRAY ELEMENTS \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER ELEMENT TO FIND ITS FREQUENCY \n");
    int d;
    int c=0;
    scanf("%d",&d);
    for(int i=0;i<10;i++)
    {
        if(a[i]==d)
        c++;

    }
    printf("FREQUENCY OF %d IS %d TIMES",d,c);
    return 0;
}
