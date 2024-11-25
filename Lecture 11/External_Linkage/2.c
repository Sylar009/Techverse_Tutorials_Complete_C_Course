#include <stdio.h>
extern int sharedValue; // Reference to external linkage
void updateValue() {
    sharedValue += 5;
}