// swap without using 3rd variable




#include<stdio.h>
#include<math.h>
int main()
{
int p,q;
printf("The 1st and 2nd numbers are =");
scanf("%d%d", &p,&q);
p=p+q;
q=p-q;
p=p-q;
printf("The 1st number is %d\n",p);
printf("The 2nd number is %d",q);
return 0;
}