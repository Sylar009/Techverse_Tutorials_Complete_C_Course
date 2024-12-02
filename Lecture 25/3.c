#include <stdio.h> 

int main() { 
    char inputChar; 
    printf("Enter a character: "); 
    inputChar = getchar(); // Reading character input 
    printf("You entered: "); 
    putchar(inputChar); // Displaying character 
    return 0; 
}