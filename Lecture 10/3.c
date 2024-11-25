#include <stdio.h>

int main() {
    int localVar = 50; // Local to main()
    {
        int nestedVar = 100; // Nested block
        printf("Nested Variable: %d\n", nestedVar);
    }
    // printf("%d", nestedVar); // Error: not in scope
    return 0;
}