// leap year using operator

#include<stdio.h>  
  
int main()  
{  
    int year;  
  
    printf("Enter the year ");  
    scanf("%d", &year);  
  
   (year%100==0)? ((year%400==0)? (printf("leap year")):(printf("not leap year"))) : ((year%4==0)? (printf("leap year")):(printf("not leap year")));
   
   
   
   
  
    return 0;  
}