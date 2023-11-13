//add all elments in an array

#include <stdio.h>

int main() {
  int i, n, sum = 0;
  int *ptr;
  printf("Enter the number of elements  : ");
  scanf("%d", &n);
  printf("Enter the %d number of elements : \n",n);
   int arr[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}
  ptr = arr; 
  for (i = 0; i < n; i++) {
    sum = sum + *ptr;
    ptr++;
  }
  printf("The sum of array is : %d", sum);
  return 0;
}
