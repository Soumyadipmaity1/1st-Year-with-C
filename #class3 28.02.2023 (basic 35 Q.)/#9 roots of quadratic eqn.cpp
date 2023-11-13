//#9  roots of quadratic eqn

#include<stdio.h>
#include<math.h>
int main() 
{
	double a, b,c, sqroot;
	printf("Enter coefficient of X^2(a), x(b) and constant part(c) = ");
	scanf("%lf %lf %lf",&a,&b,&c);
	sqroot= sqrt(b*b-4*a*c);
	float root1= (-b-sqroot)/(2*a);
	float root2= (-b+sqroot)/(2*a);
	printf ("The positive part is %lf\n",root1);
	printf ("The negative part is %lf",root2);
	return 0;
}
