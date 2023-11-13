// factorial of a number using a recursive function

#include <stdio.h>

int factorial(int n) 
{
    if (n == 0) 
	{
        return 1;
    } else 
	{
        return n * factorial(n - 1);
    }
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}