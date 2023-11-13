#include <stdio.h>
struct Temp {
    float f;
    float c;
};
float fToC(float f) {
    return (f - 32) * 5 / 9;
}
float cToF(float c) {
    return (c * 9 / 5) + 32;
}
int main() {
    struct Temp temp1;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temp1.f);
    temp1.c = fToC(temp1.f);
    printf("%.2f Fahrenheit is equivalent to %.2f Celsius.\n", temp1.f, temp1.c);
    printf("Enter temperature is Celsius: ");
    scanf("%f", &temp1.c);
    temp1.f = cToF(temp1.c);
    printf("%.2f Celsius is equivalent to %.2f Fahrenheit.\n", temp1.c, temp1.f);
    return 0;
}
