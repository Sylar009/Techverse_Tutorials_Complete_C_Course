#include <stdio.h>

int main() {
    int number = 42; // Scope: main() function
    printf("Value: %d\n", number);
    return 0;
}

void printNumber() {
    // printf("%d", number); // Error: 'number' not in scope
}