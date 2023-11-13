// find lower triangular matrix
 
#include<stdio.h>
 
int main()
{
 	int i, j, r, c, a[3][3];
 	printf("Please Enter the Matrix Elements \n");
 	for(i=0;i<3;i++)
  	{
   		for(j=0;j<3;j++)
    	{
      		scanf("%d",& a[i][j]);
    	}
  	}
  	
     printf(" The lower triangular matrix will be: \n");
 	for(i=0;i<3;i++)
  	{
  	
   		for(j=0;j<3;j++)
    	{
    		if(i>=j)
    		{
    			printf("%d ", a[i][j]);
			}
		
   	 	}
   	 		printf("\n");
  	}
  	
 	return 0;
}