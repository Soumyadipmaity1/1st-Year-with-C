// reverse an string

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    gets(ch);
    char ch2[20];
    int d=0;

    for(int i=0;i<20;i++)
    {
        if(ch[i]=='\0')
        break;
        d++;
    }
    int z=d-1;
    for(int i=0;i<d;i++)
    {
            ch2[z]=ch[i];
            z--;
    }
    for(int i=0;i<d;i++)
    {
        printf("%c",ch2[i]);
    }
    return 0;
}