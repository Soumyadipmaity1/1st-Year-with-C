// add two distances km-m using structure
#include <stdio.h>
struct Distance {
    int kilometers;
    int meters;
};
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.meters = d1.meters + d2.meters;
    if (result.meters >= 1000) {
        result.kilometers = 1;
        result.meters -= 1000;
    } else {
        result.kilometers = 0;
    }
    result.kilometers += d1.kilometers + d2.kilometers;
    return result;
}
int main() {
    struct Distance d1, d2, sum;
    printf("Enter distance 1 (kilometers meters): ");
    scanf("%d %d", &d1.kilometers, &d1.meters);
    printf("Enter distance 2 (kilometers meters): ");
    scanf("%d %d", &d2.kilometers, &d2.meters);
    sum = addDistances(d1, d2);
    printf("Sum of distances: %d kilometers %d meters\n", sum.kilometers, sum.meters);

    return 0;
}
