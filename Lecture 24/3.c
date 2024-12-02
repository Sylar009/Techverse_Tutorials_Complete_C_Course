#include <stdio.h>

int main() {
    char input[100];
    printf("Enter a string with spaces: ");
    scanf("%[^\n]", input);  // Reads until newline.
    printf("Your Input: %s\n", input);
    return 0;
}