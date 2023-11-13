// add distance (inche-feet) using structure
#include <stdio.h>
struct Distance {
    int feet;
    int inches;
};
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.inches = d1.inches + d2.inches;
    if (result.inches >= 12) {
        result.feet = 1;
        result.inches -= 12;
    } else {
        result.feet = 0;
    }
    result.feet += d1.feet + d2.feet;
    return result;
}
int main() {
    struct Distance distance1, distance2, sum;
    printf("Enter distance 1 (feet inches): ");
    scanf("%d %d", &distance1.feet, &distance1.inches);
    printf("Enter distance 2 (feet inches): ");
    scanf("%d %d", &distance2.feet, &distance2.inches);
    sum = addDistances(distance1, distance2);
    printf("Sum of distances: %d feet %d inches\n", sum.feet, sum.inches);
    return 0;
}