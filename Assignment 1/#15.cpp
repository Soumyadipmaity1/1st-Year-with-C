// #15 0=a++/2/b--/c++/d--


#include<stdio.h>
int main()
{
	float a=10, b=8, c=2, d=0;
	double e=a++/2/b--/c++/d--;
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f\n", c);
    printf("%f\n", d);
      printf("%lf\n", e);
    return 0;
}