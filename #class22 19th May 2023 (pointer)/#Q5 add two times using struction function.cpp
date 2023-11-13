//add two times

#include <stdio.h>
typedef struct {
    int h;
	int m;
	int s;
} Time;
Time addTimes(Time t1, Time t2) {
    Time sum;
    sum.s = t1.s + t2.s;
    sum.m = t1.m + t2.m + (sum.s / 60);
    sum.h = t1.h + t2.h + (sum.m / 60);
    sum.s %= 60;
    sum.m %= 60;
    return sum;
}
void displayTime(Time t) {
    printf("%02d:%02d:%02d\n", t.h, t.m, t.s);
}
int main() {
    Time t1, t2, result;
    printf("Enter first time (hh:mm:ss): ");
    scanf("%d:%d:%d", &t1.h, &t1.m, &t1.s);
    printf("Enter second time (hh:mm:ss): ");
    scanf("%d:%d:%d", &t2.h, &t2.m, &t2.s);
    result = addTimes(t1, t2);
    printf("Sum of times: ");
    displayTime(result);
    return 0;
}
