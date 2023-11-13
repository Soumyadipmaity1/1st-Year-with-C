// searching of element in a matrix


 
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
printf(" Enter the element ");
int a;
int x=0;
scanf("%d",&a);
  for (i=0;i<n;i++)
 {
 	for(j=0;j<m;j++)
 	{
 		if (arr[i][j]==a)
 	    x++;
	 }
	 
 }
 if (x==0)
 printf("Not present in the matrix");
 else
 	printf("%d is in the matrix %d times\n ",a,x);

 	return 0;
 }