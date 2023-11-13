// avg mark of student using array

#include<Stdio.h>
int main()
{
	int mark [10];
	float avg;
	int sum=0,i;
	printf("Enter your marks =");
    for( i=0;i<10;i++) 
    {
		scanf("%d",&mark[i]);
	}
    for( i=0;i<10;i++)	
	{
    sum=sum+mark[i];
	}
	avg=sum/10;
printf("AVG is %f ",avg);
switch((int)avg/10)
{
	case 10:
		printf("grade o");
		break;;	
		case 9:
		printf("grade E");
		break;
		case 8:
		printf("grade A");
		break;
		case 7:
		printf("grade B");
		break;
		case 6:
		printf("grade C");
		break;
		case 5:
		printf("grade D");
		break;
		case 4:
		printf("grade F");
		break;
	  default:
	  	printf("wrong input or failed");
}
	return 0;	
}