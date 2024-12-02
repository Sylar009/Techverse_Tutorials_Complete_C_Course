#include <stdio.h>
int main() {
    int num = 10;
    printf("Size of num: %lu bytes\n", sizeof(num));
    printf("Ternary: %d\n", (num > 5) ? num : 0);
    return 0;
}