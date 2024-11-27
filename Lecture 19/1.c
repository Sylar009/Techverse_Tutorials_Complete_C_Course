#include <stdio.h>

int main() {
    int num = 10; // Integer variable
    char letter = 'c'; // Character variable (ASCII value of 'c' is 99)

    // Implicit conversion of 'letter' to int
    num = num + letter;

    // Implicit conversion of num to float
    float result = num + 1.5;

    printf("Integer Result: %d\n", num); // Output: 109
    printf("Float Result: %f\n", result); // Output: 110.500000

    return 0;
}