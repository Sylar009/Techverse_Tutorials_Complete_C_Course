#include <stdio.h>

int main() {
    char a = 'p', b = 'q', c = 'z';
    char res1 = a + 2;  // Increment 'p' by 2
    char res2 = b - 1;  // Decrement 'q' by 1
    char res3 = c + 3;  // Increment 'z' by 3 (may exceed 127)

    printf("Result 1: %d\n", res1); // Output: 114 (ASCII of 'r')
    printf("Result 2: %d\n", res2); // Output: 112 (ASCII of 'p')
    printf("Result 3: %d\n", res3); // Output: 125

    return 0;
}