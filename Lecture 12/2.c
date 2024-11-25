#include <stdio.h>

int main() {
    long int longInt;
    long double longDouble;

    printf("Size of longInt: %zu bytes\n", sizeof(longInt));
    printf("Size of longDouble: %zu bytes\n", sizeof(longDouble));

    return 0;
}