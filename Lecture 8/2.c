#include <stdio.h>
int main() {
    int num1 = 30;
    const int* constantPtr = &num1; // Pointer to constant

    printf("Pointer Value: %d\n", *constantPtr);

    // Uncommenting the next line will cause a compiler error
    // *constantPtr = 40;

    return 0;
}