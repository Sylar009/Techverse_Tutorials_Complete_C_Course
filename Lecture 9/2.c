#include <stdio.h>
#define PI 3.14
int main() {
    printf("Value of PI: %.2f\n", PI);
    #undef PI 
    #define PI 3.1416
    printf("Updated Value of PI: %.4f\n", PI);
    return 0;
}