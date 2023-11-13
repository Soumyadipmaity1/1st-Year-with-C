   // display index
   
#include<stdio.h>
int main()
{
    int a[5];
    printf("ENTER ARRAY ELEMENTS \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER ELEMENT TO FIND ITS POSITION\n");
    int d;
    scanf("%d",&d);
    int c=-1;
	 for(int i=0;i<5;i++)
    {
        if (d==a[i])
        {
        	c=i;
		}
    }
    if(c==-1)
    printf("ELEMENT NOT PRESENT");
    else
    printf("ELEMENT PRESENT AT %d",c);

    return 0;

}
