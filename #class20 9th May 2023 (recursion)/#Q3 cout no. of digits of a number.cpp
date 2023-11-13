// count no. of digits using recursion

#include <stdio.h>

int cdigits(int n) 
{
    if (n == 0) 
	{
        return 0;
    } else 
	{
        return 1 + cdigits(n / 10);
    }
}

int main() 
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    int result = cdigits(number);
    printf("Number of digits in %d is %d\n", number, result);
    return 0;
}