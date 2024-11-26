#include <stdio.h>

int main() {
    char char1 = 'A', char2 = 'B';
    char sum = char1 + char2;  // Sum ASCII values

    printf("char1: %c\n", char1); // Output: A
    printf("char2: %c\n", char2); // Output: B
    printf("Sum (Character): %c\n", sum); // Output: unexpected
    printf("Sum (Integer): %d\n", sum); // Output: 131

    return 0;
}