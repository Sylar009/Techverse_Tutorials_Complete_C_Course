#include <stdio.h>
#include "1.c"

extern int sharedValue; // Reference to external linkage
void updateValue() {
    sharedValue += 5;
}