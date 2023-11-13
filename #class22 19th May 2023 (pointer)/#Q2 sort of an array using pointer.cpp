// sort an array using pointer

#include <stdio.h>
int main()
{
	int i, j, temp, *ptr,n;
   printf("Enter the number of element in an array=");
   scanf("%d",&n);
   int x[n];
   ptr=x;
   printf("Enter the elements");
   for(i=0;i<n;i++)
   {
   	scanf("%d",(ptr+i));
   }
   for (i=0;i<n-1;i++)
   {
   	for(j=i+1;j<n;j++)
   	{
   	 if(*(ptr+j)<*(ptr+i))
	 {
	   temp=*(ptr+i);
	   *(ptr+i)=*(ptr+j);
	   *(ptr+j)=temp;	
	 }	
	}
   }
   printf("The sorted array is \n");
    for(i=0;i<n;i++)
   {
   	printf("%d\n",*(ptr+i));
   }
   return 0;
}
