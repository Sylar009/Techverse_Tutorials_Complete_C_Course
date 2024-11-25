#include <stdio.h>
int sharedValue = 10; // External linkage
void printValue() {
    printf("Shared Value: %d\n", sharedValue);
}