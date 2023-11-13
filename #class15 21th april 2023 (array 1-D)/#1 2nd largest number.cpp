// 2nd largest number


 #include<stdio.h>
 int main()
{
    int size;
    printf("ENTER SIZE \n");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    int max=-999;int c=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
        max = a[i];
        c=i;
        }
    }
    int smax=-999;int d;
        for(int i=0;i<size;i++)
    {
        if(i==c)
        {
        continue;
        }
        if(a[i]>smax)
        {
        smax = a[i];
        d=i;
        }
    }
    printf("Second largest number = %d at %d \n",smax,d);
	return 0;
}