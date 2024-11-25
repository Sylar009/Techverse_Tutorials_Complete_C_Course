#include <stdio.h>
int main() {
    const int limit = 10; // Declaring constant
    // limit = 20; // Error: Can't modify constant
    printf("Value of limit: %d\n", limit);
    return 0;
}