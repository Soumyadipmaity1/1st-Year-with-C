// multiplecation of the matrix

#include <stdio.h>
int main() {
  int r, c, a[10][10], b[10][10], sum[10][10], i, j;
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns: ");
  scanf("%d", &c);

  printf("Enter elements of 1st matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      
      scanf("%d", &a[i][j]);
    }
  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {  
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      sum[i][j] = a[i][j] * b[i][j];
    }
  printf("Multiply of matrices: \n");
  for (i = 0; i < r; i++)
  {
  
    for (j = 0; j < c; j++) {
      printf("%d   ", sum[i][j]);
      
    }
}
  return 0;
}