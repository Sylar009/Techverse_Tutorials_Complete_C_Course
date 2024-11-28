#include <stdio.h>

int main() {
    int age;      // Integer variable
    char grade;   // Character variable
    float height; // Float variable

    // Input integer
    printf("Enter your age: ");
    scanf("%d", &age);

    // Clear input buffer
    while ((getchar()) != '\n');

    // Input float
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    // Clear input buffer
    while ((getchar()) != '\n');

    // Input character
    printf("Enter your grade: ");
    scanf("%c", &grade);

    // Output all values
    printf("\nYour age is: %d", age);
    printf("\nYour height is: %.2f meters", height);
    printf("\nYour grade is: %c\n", grade);

    return 0;
}