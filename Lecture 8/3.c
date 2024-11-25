#include <stdio.h>
int main() {
    int num1 = 50;
    int* const constPtr = &num1; // Constant pointer to variable

    printf("Pointer Value: %d\n", *constPtr);

    *constPtr = 60; // Modifying the value is valid
    printf("Modified Value: %d\n", *constPtr);

    // Uncommenting the next line will cause a compiler error
    // constPtr = &anotherVariable;

    return 0;
}