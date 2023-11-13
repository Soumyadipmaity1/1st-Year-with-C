//semester & year calculation with switch case



#include<stdio.h>
int main()
{
int n;
printf("Enter your semester= ");
scanf("%d",&n);
switch (n)
{case 1: printf("1st Year");
break;
case 2: printf("1st Year");
break;
case 3: printf("2nd Year");
break;
case 4: printf("2nd Year");
break;
case 5: printf("3rd Year");
break;
case 6: printf("3rd Year");
break;
case 7: printf("4th Year");
break;
case 8: printf("4th Year");
break;

default: printf("wrong entry");
break;
}
return 0;
}