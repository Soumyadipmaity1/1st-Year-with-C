//CUSTOMER BILL


#include<stdio.h>

int main() 
{	
	char p;
	int vada,samosha,ice,idli,coldrinks;
	printf("Enter your name- ");
	scanf("%s",&p);
	printf("The quantity of vada ");
	scanf("%d",&vada);
	printf("The quantity of samosha ");
	scanf("%d",&samosha);
	printf("The quantity of ice cream ");
	scanf("%d",&ice);
	printf("The quantity of idli ");
	scanf("%d",&idli);
	printf("The quantity of cold drinks ");
	scanf("%d",&coldrinks);	
	int a=(vada*5);
	int b=(samosha*5);
	int c=(idli*10);
	int d=(ice*10);
	int e=(coldrinks*30);

	printf("        !!  Welcome to kIIT !!\n\n");
	printf ("            CUSTOMER BIIL\n\n");

	printf("TITLE        NO OF ITEM       AMOUNT\n\n");
	printf("Vada             %d             %d\n",vada,a);
	printf("Samosha          %d             %d\n",samosha,b);
	printf("Idli             %d             %d \n",idli,c);
	printf("Ice Cream        %d             %d \n",ice,d);
	printf("Cold drinks      %d             %d \n",coldrinks,e);
	printf("                               _____\n");
	int sum=(a+b+c+d+e);
	printf("                  Total price = %d \n",sum);
	float gst =sum*1.8;
    printf("          With gst total price=%f\n",gst);
	printf("                               _____\n\n");
	
	printf("       Thank you VISIT AGAIN !!");
	return 0;
}