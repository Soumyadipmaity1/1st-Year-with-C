// ODD EVEN WITH RT & ARG

#include<stdio.h>  
int add(int); 
int main()  
{  
    int a;  
    printf("Enter A integer number");  
    scanf("%d", &a);    
   if (a%2==0){
   	printf("EVEN");
   }
   else
   printf("ODD");
    return 0;  
}  
int add(int x)  
{  
    return(x);  
}     