#include <stdio.h>

int main() {
    int num, rem, product;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for(product = 1; num > 0; num = num / 10) {
        rem = num % 10;
        product = product * rem;
    }
    
    printf("Product of digits = %d<br>", product);
    return 0;
}