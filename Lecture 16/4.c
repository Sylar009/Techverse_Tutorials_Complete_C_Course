#include <stdio.h>
#include <stdbool.h>

int main() {
    bool keep_running = true;
    int count = 0;

    while (keep_running) {
        printf("Count: %d\n", count);
        count++;
        if (count >= 5) {
            keep_running = false;
        }
    }

    return 0;
}