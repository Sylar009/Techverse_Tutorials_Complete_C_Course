#include <stdio.h>
extern int sharedValue;
void printValue();
void updateValue();

int main() {
    printValue();
    updateValue();
    printValue();
    return 0;
}