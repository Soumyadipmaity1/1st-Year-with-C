/*C program to swap adjacent elements of an one dimensional array.*/
 
#include <stdio.h>

int main()
{
    int n,i;
    int temp;
     
    printf("Enter total number of elements: ");
    scanf("%d",&n);
     int arr[n];
    if(n%2 !=0)
    {
        printf("Total number of elements should be EVEN.");
    }
    printf("Enter array elements:\n");
    for(i=0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i < n;i+=2)
    {
        temp    = arr[i];
        arr[i]  = arr[i+1];
        arr[i+1]= temp;
    }
     
    printf("\nArray elements after swapping adjacent elements:\n");
    for(i=0;i < n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}