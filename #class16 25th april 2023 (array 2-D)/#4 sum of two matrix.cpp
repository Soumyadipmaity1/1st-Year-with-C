//  sum of two matrix
 
 #include<stdio.h>
 int main()
 {
 	int p,q;
  int n,m,sum[p][q];	
 printf("Enter order of the matrix ");
 scanf("%d %d",&n,&m);
  printf("Enter the elements of 1st matrix =");
	int arr[n][m],i,j; 
 for (i=0;i<n;i++)
 {
 	for(j=0;j<m;j++)
 	{
 		scanf("%d",&arr[i][j]);
	 }
 }
   for (i=0;i<n;i++)
 {
 	for(j=0;j<m;j++)
 	{
 		printf("%d ",arr[i][j]);
	}
	 printf("\n");
 }
   //int n,m;	
 printf("Enter order of the matrix ");
 scanf("%d%d",&n,&m);
  printf("Enter the elements of 2nd matrix =");
	int brr[n][m]; 
 for (i=0;i<n;i++)
 {
 	for(j=0;j<m;j++)
 	{
 		scanf("%d",&brr[i][j]);
	 }
 }
   for (i=0;i<n;i++)
 {
 	for(j=0;j<m;j++)
 	{
 		printf("%d ",brr[i][j]);
	}
	 printf("\n");
 }

for (i=0;i<n;i++)
 {
 	for(j=0;j<m;j++)
 	{
 		sum[p][q]= arr[i][j]+brr[i][j];
 		printf("%d ",sum[p][q]);
	}
	 printf("\n");
 }
 	return 0;
 }