// swap two variable by user defined function

#include<stdio.h>
 int swap(int *, int *);
 int main()
 {
 	int a , b;
 	printf("Enter two number");
 	scanf("%d %d",&a,&b);
 	printf("before swaping a=%d b=%d",a,b);
 	swap(&a,&b);
 		printf("After swaping a=%d b=%d",a,b);
 		return 0;
 }
 int  swap(int *a, int *b)
 {
 	int temp=*a;
 	*a=*b;
 	*b=temp;
 	return (*a,*b);
 }