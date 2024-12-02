#include <stdio.h>  
int main() {  
    int num = 255;  
    printf("Hexadecimal (lowercase): %x\n", num);  
    printf("Hexadecimal (uppercase): %X\n", num);  
    printf("Pointer Address: %p\n", (void*)&num);  
    return 0;  
}  