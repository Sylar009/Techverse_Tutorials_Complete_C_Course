#include <stdio.h>

int main() {
    int normalInt;
    short int shortInt;

    printf("Size of normalInt: %zu bytes\n", sizeof(normalInt));
    printf("Size of shortInt: %zu bytes\n", sizeof(shortInt));

    return 0;
}