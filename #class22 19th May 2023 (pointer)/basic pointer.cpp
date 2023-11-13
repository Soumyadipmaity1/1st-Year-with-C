// basic pointer

#include<stdio.h>
int main()
{
	int a=20,*ptr;
     ptr=&a;
    printf("%d\n",a);
    printf("%u\n",&a);
    printf("%d\n",ptr);
    printf("%u",&ptr);
    return 0;
}