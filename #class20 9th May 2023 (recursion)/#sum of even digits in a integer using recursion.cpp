// sum of even digits in a integer


#include <stdio.h>

int sumEven(int n) 
{
    if (n == 0) 
	
	{
        return 0;
    }
	 else
	{
        int digit = n % 10;
        if (digit % 2 == 0) 
		{
            return digit + sumEven(n / 10);
        } 
    	else
	    {
            return sumEven(n / 10);
        }
    }
}

int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int result = sumEven(num);
    printf("Sum of even digits in %d is %d\n", num, result);
    return 0;
}