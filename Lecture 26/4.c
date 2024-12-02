#include <stdio.h>
int main() {
    int m = 5, n = 3;
    printf("m & n: %d\n", m & n);
    printf("m | n: %d\n", m | n);
    printf("m ^ n: %d\n", m ^ n);
    printf("~m: %d\n", ~m);
    printf("m << 1: %d\n", m << 1);
    printf("n >> 1: %d\n", n >> 1);
    return 0;
}