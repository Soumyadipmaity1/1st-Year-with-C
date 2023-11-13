//#10 e = (++c + d--)/( b++ - ++a)

#include<stdio.h>
int main()
{
	float a=5,b=4,c=1 , d=6,e=9;
	  e = (++c + d--)/( b++ - ++a);
	printf("a = %f \n",a);
	printf("b = %f \n",b);
	printf("c = %f \n",c);
	printf("d = %f \n",d);
	printf("e = %f \n",e);
	return 0;
}