#include <stdio.h>
#include "2.c"

extern int sharedValue;
void printValue();
void updateValue();

int main() {
    printValue();
    updateValue();
    printValue();
    return 0;
}