#include <stdio.h>  
#define TAX_RATE 0.18  

int main() {  
    float price = 100.0;  
    float tax = price * TAX_RATE;  

    printf("Price: %.2f\n", price);  
    printf("Tax: %.2f\n", tax);  

    return 0;  
}  