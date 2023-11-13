//find future value



#include<stdio.h>
#include<math.h>
int main() 
{
	float pv,r,n,x;
	printf("Enter the values of pv n r   =");
	scanf("%f%f%f",&pv,&r,&n);
	 x = (1+r);
	float y = pow (x,n);
	float fv=pv*y;
	
	printf ("The final value is %f",fv);
	return 0;
}