#include <stdio.h>  
int main() {  
    int num;  
    printf("Enter an integer: ");  
    scanf("%d", &num);  
    printf("Signed Integer: %d\n", num);  
    printf("Unsigned Integer: %u\n", (unsigned int)num);  
    return 0;  
}  