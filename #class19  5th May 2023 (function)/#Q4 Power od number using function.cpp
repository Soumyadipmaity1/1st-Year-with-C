// power of number using function

#include <stdio.h>
double power(double x, double y) {
    double result = 1.0;
    while (y > 0) {
        result *= x;
        y--;
    }
    return result;
}
int main() {
    double x, y;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of y: ");
    scanf("%lf", &y);
    double result = power(x, y);
    printf("%.2lf raised to the power of %.2lf is %.2lf\n", x, y, result);
    return 0;
}
