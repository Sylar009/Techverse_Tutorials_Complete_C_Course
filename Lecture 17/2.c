#include <stdio.h>

int main() {
    signed char signed_val = 0xfb; // -5 in signed char
    unsigned char unsigned_val = 0xfb; // 251 in unsigned char

    printf("Signed value: %c\n", signed_val);
    printf("Unsigned value: %c\n", unsigned_val);

    if (signed_val == unsigned_val) {
        printf("Both are same.\n");
    } else {
        printf("They are different.\n");
    }

    return 0;
}