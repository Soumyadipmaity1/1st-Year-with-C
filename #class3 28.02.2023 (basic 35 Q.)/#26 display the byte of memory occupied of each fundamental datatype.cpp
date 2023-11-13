
// display the bytes of memory occupied of each fundamental data


#include<stdio.h>
int main()
 {
    int i;
    float f;
    char c;
    printf("The size of int: %zu bytes\n", sizeof(i));
    printf("The Size of float: %zu bytes\n", sizeof(f));
    printf("The size of char: %zu byte\n", sizeof(c));
    return 0;
}