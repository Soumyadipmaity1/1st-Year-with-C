// calculate party expenses and divided it by two friends

#include <stdio.h>
struct Party {
    float food;
    float journey;
};
int main() {
    struct Party party;
    float total, each;
    printf("Enter food expense: ");
    scanf("%f", &party.food);
    printf("Enter journey expense: ");
    scanf("%f", &party.journey);
    total = party.food + party.journey;
    each = total / 2;
    printf("Total expense: %.2f\n", total);
    printf("Each friend's expense: %.2f\n", each);
    return 0;
}