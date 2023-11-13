// triangle area when sides are given


#include<stdio.h>
#include<math.h>
int main()
{
float p,q,r;
printf("enter three sides of the triangle\n");
scanf("%f%f%f",&p,&q,&r);
 float s = (p+q+r)/2 ;
 
 float area = sqrt(s*(s-p)*(s-q)*(s-r));
printf("The area is %f",area);
return 0;
}