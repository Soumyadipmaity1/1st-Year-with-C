//highest among 3 number


#include <stdio.h>
int main()
{
    int p, q, r;
 
    printf("Enter the numbers A, B and C: ");
    scanf("%d %d %d", &p, &q, &r);
     if (p >= q && p >= r)
        printf("%d is the largest number.", p);
 
    if (q >= p && q >= r)
        printf("%d is the largest number.", q);
 
    if (r >= p && r >= q)
        printf("%d is the largest number.", r);
 
    return 0;
}