//calculate telephone bill 


#include <stdio.h>
int main()
{
char name[100];
float a,b,pr,cr;
printf("enter the name of customer\n");
scanf("%s", name);
printf("enter the previous reading \n");
scanf("%f", &pr);

printf("enter the current reading \n");
scanf("%f", &cr);

a=cr-pr;
b=a*0.5;

printf("                                             BSNL\n\n\n                           ");
printf(" name=%s\n", &name                                                                  );
printf("               The per min charges for using tele service is 0.5 per min\n");
printf("               Units consumed from the given readings is %0.2f\n",a                  );
printf("               Total charges in rupees %0.2f\n\n\n\n",b                              );
printf("             To pay the telephone bill kindly visit http://www.bsnlpayonline.in");
return 0;

}