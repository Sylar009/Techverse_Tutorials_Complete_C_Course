#include <stdio.h>
int main() {
    int num1 = 100;
    const int* const constantPtrToConst = &num1; // Constant pointer to constant

    printf("Pointer Value: %d\n", *constantPtrToConst);

    // Uncommenting the next lines will cause errors
    // *constantPtrToConst = 200;
    // constantPtrToConst = &anotherVariable;

    return 0;
}