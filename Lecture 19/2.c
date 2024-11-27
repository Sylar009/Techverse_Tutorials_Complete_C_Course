#include <stdio.h>

int main() {
    double num = 3.7;  // Double variable
    int result = (int)num + 2;  // Explicitly converting double to int

    printf("Double Value: %.1f\n", num); // Output: 3.7
    printf("Integer Result: %d\n", result); // Output: 5

    return 0;
}