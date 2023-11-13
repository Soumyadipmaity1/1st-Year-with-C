// power of a number using pointer and function


#include <stdio.h>
void power(int x, int y, void (*ptr)(int)) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    ptr(result);
}
void print(int result) {
    printf("Power: %d\n", result);
}
int main() {
    int x, y;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    power(x, y, print);
    return 0;
}
  