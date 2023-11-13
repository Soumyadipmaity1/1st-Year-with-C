//Star hollow rectangle with one diagonal


#include<stdio.h>
int main()
{
int n;
printf("Emter the number of rows= ");
scanf("%d",&n);
int m;
printf("Emter the number of column= ");
scanf("%d",&m);
for (int i=1;i<=n;i++)
{
for (int j=1;j<=m;j++)
{
if (i==j||i==1||i==n||j==1||j==m)
printf("* ");
else
printf("  ");
}
printf("\n");
}
return 0;
}
