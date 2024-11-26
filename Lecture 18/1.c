#include <stdio.h>

int main() {
    char x = 120, y = 15;  // Renamed for clarity
    x = x + y;

    printf("Integer output: %d\n", x); // Output: -121
    printf("Character output: %c\n", x - y - 4); // Output: 'y'

    return 0;
}