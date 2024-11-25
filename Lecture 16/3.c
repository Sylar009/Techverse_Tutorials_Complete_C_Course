#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 10, y = 20;
    bool is_greater = (x > y);

    if (is_greater) {
        printf("x is greater\n");
    } else {
        printf("x is not greater\n");
    }

    return 0;
}