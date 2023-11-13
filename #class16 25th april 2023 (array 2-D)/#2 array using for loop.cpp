//  2-D Array
 
 #include<stdio.h>
 int main()
 {
 	int arr[][3]={{1,2,8},{9,10,5}}, i,j;   // initialize the data
 for (i=0;i<2;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		printf("%d ",arr[i][j]);
	 }
 }
 	return 0;
 }