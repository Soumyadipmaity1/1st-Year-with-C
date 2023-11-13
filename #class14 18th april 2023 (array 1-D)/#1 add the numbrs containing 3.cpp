
///add numbers contain 3

#include<stdio.h>
int main()
{
    int a[10],sum=0;
    printf("ENTER ARRAY ELEMENTS \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
   for(int i=0; i<10;i++)
   {
   	int d=a[i];
   	int flag=0;
   	while (d!=0)
   	{
   		int r=d%10;
   		if (r==3)
   		{
   			flag=1;
		}
		d=d/10;
	}
	if (flag==1)
	{
		sum=sum+a[i];
	}
   }
    printf("SUM = %d",sum);
    return 0;

}
