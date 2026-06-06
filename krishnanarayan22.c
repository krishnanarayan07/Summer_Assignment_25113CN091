#include <stdio.h>
#include <math.h>

long long convertBinaryToDecimal(long long n) {
    long long decimal = 0;
    int i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        decimal += rem * pow(2, i);
        n /= 10;
        i++;
    }
    return decimal;
}

int main() {
    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    printf("Decimal: %lld\n", convertBinaryToDecimal(binary));
    return 0;
}