#include <stdio.h>

typedef enum { false, true } Bool;

int main() {
    Bool is_ready = true;
    Bool has_failed = false;

    printf("Ready: %d\n", is_ready);
    printf("Failed: %d\n", has_failed);

    return 0;
}