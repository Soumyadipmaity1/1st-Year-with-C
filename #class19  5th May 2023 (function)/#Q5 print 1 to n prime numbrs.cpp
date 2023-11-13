// print 1 to n prime numbers

#include<stdio.h>
void prime(int);
int main(){
	int n;
	printf("Enter max range: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}

void prime(int n ){

    int num,i,count;

    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             printf("%d ",num);
    }
     
}

