#include <stdio.h>

int main() {
    // Variable Declaration
    int localVariable = 10;
    static int staticVariable = 20;
    printf("Local Variable: %d\n", localVariable);
    printf("Static Variable: %d\n", staticVariable);
    return 0;
}