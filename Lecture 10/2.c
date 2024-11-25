#include <stdio.h>

// Global variable
int globalVar = 10;

void printGlobal() {
    printf("Global Variable: %d\n", globalVar);
}

int main() {
    printf("Before Change: %d\n", globalVar);
    globalVar = 20; // Modify global variable
    printGlobal();
    return 0;
}