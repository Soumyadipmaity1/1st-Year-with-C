#include<stdio.h>
#include<math.h>
int main()
{
	int a , b, c, d;
	int yes, no;
	int n;
	printf("Type 1 to enter the values otherwise type 0 for no = ");
		scanf("%d",&yes);
	if (yes==1)
	{
		int w,u,v,x,y,z;
		int n;
		int p,q,r,s;
		printf("Enter your values for a , b, c, d");
		scanf("%d%d%d%d",&a,&b,&c,&d);
	
		printf("Enter 1, 2 ,3,4 for your formula");
		scanf("%d",&n);
	switch(n)	
	{
		case 1:
		printf("Your formula is (a+b)-(a*b+c)/d*a-b ");
		u=(a+b)-(a*b+c)/d*a-b;
			printf("= %d",u);
			break;
    	case 2:
    		printf("Your formula is (d-a+b)/d/c+a*c ");
		v=(d-a+b)/d/c+a*c;
			printf("= %d",v);
			break;
		case 3:
    		printf("Your formula is w=a+d%b-c*a");
			w=a+d%b-c*a;
			printf("= %d",w);
			break;
		case 4:
    		printf("Your formula is x=c%a+d-(c*a)/a*b ");
	    	x=c%a+d-(c*a)/a*b;
			printf("= %d",x);
			break;
		case 5:
    		printf("Your formula is y=(a+b)-(a+b*c)+(a+c%d)+(c%a) ");
			y=(a+b)-(a+b*c)+(a+c%d)+(c%a);
			printf("= %d",y);
			break;
		default:
		printf("Wrong Input");
		
	}}
	else if (yes==0)
	{
  int a=10, b=5, c=8, d=4;
  int u,v,w,x,y;
  printf("Enter 1, 2 ,3,4 for your formula");
  scanf("%d",&n);
		switch(n)	
	{
	

		case 1:
		printf("Your formula is (a+b)-(a*b+c)/d*a-b ");
		u=(a+b)-(a*b+c)/d*a-b;
			printf(" = %d",u);
			break;
    	case 2:
    		printf("Your formula is (d-a+b)/d/c+a*c ");
		v=(d-a+b)/d/c+a*c;
			printf("= %d",v);
			break;
		case 3:
    		printf("Your formula is w=a+d%b-c*a ");
			w=a+d%b-c*a;
			printf("= %d",w);
			break;
		case 4:
    		printf("Your formula is x=c%a+d-(c*a)/a*b ");
	    	x=c%a+d-(c*a)/a*b;
			printf(" = %d",x);
			break;
		case 5:
    		printf("Your formula is y=(a+b)-(a+b*c)+(a+c%d)+(c%a) ");
			y=(a+b)-(a+b*c)+(a+c%d)+(c%a);
			printf("%d",y);
			break;
			default:
		printf("Wrong Input");
			}
			
				}	

return 0;
	
}