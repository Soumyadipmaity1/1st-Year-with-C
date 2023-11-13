//find ncr by  factorial


#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int nCr(int n, int r) {
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    return numerator / denominator;
}

int main() {
    int n, r;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    int result = nCr(n, r);

    printf("%dC%d = %d\n", n, r, result);

    return 0;
}


