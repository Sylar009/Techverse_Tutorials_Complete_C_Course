#include <stdio.h>
static int count = 0; // Internal linkage

void increment() {
    count++;
    printf("Count: %d\n", count);
}

int main() {
    increment();
    increment();
    return 0;
}