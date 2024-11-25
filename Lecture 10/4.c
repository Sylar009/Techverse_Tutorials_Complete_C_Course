#include <stdio.h>

void display() {
    static int counter = 0; // Retains value between calls
    counter++;
    printf("Counter: %d\n", counter);
}

int main() {
    display();
    display();
    return 0;
}