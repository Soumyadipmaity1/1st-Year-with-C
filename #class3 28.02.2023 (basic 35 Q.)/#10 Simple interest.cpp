// find simple interest

#include<stdio.h>
int main(){
	float p,r,t;
	printf("The value of p, r, t =");

	scanf("%f%f%f",&p,&t,&r);
	float i=(p*t*r)/100;
	printf("The simple interest is = %f",i);
	return 0;
}