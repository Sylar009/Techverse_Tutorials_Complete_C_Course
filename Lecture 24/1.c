#include <stdio.h>

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%[A-Z]", input);  // Reads only uppercase letters.
    printf("Filtered Input: %s\n", input);
    return 0;
}