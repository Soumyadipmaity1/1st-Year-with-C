//  2-D Array   n x n
 
 #include<stdio.h>
 int main()
 {
  int n,m;	
 printf("Enter order of the matrix ");
 scanf("%d %d",&n,&m);
  printf("Enter the elements =");
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
 	return 0;
 }