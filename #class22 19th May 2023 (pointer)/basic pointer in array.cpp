// SUM OF ALL ELEMENT IN AN ARRAY WITH POINTER 

#include <stdio.h>
int array_sum(int *arr, int size) 
{
    int sum = 0;
    int *ptr = arr;  
    for (int i = 0; i < size; i++) 
	{
        sum += *ptr;  
        ptr++;  
    } 
    return sum;
}
int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);    
    int result = array_sum(arr, size);
    printf("Sum: %d\n", result);
    return 0;
}










