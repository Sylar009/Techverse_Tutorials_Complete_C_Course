#include <stdio.h>

int main() {
    char name[50];   // String for single word
    char sentence[100]; // String for sentence

    // Input a single word
    printf("Enter your name: ");
    scanf("%s", name);
    
    // Clear input buffer
    while ((getchar()) != '\n');

    // Input a full sentence
    printf("Enter a sentence about yourself: ");
    scanf("%[^\n]s", sentence);

    // Output the strings
    printf("\nHello, %s!", name);
    printf("\nAbout you: %s\n", sentence);

    return 0;
}