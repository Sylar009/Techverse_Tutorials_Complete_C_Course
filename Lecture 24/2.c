#include <stdio.h>

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%[^o]", input);  // Stops at first 'o'.
    printf("Filtered Input: %s\n", input);
    return 0;
}