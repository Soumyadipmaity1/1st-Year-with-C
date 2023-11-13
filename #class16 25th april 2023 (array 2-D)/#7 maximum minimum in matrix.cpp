// maximum minimum of a element

#include<stdio.h>
int main()
{
  int m, n, largest, smallest;
  
  
  printf("Enter number of row and column: ");
  scanf("%d %d",&m,&n);

  int arr[m][n], i, j;
printf("ENTER ARRAY ELEMETS \n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {

      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }

  largest=arr[0][0];
  smallest=arr[0][0];

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(largest<arr[i][j])
      {
        largest=arr[i][j];
          
      }

      if(smallest>arr[i][j])
      {
        smallest=arr[i][j];
          
      }
    }
  }

  printf("\n"); 
  printf("Largest element in array is %d \n",  largest);
  printf("Smallest element in array is %d \n", smallest);

  return 0;
}