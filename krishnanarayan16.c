#include <stdio.h>
#include <math.h>

int main() {
    int low, high;
    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter upper limit: ");
    scanf("%d", &high);

    printf("Armstrong numbers between %d and %d are: ", low, high);

    for (int i = low; i <= high; i++) {
        int original = i;
        int sum = 0;
        int digits = (i == 0) ? 1 : (int)log10(i) + 1;

        while (original != 0) {
            int remainder = original % 10;
            sum += pow(remainder, digits);
            original /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}   