#include <stdio.h>

int main() {
    int i, num, n, count;

    // Take input for the range
    printf("Enter the range: ");
    scanf("%d", &n);

    // Print the prime numbers in the given range
    printf("The prime numbers between 1 and %d are: ", n);

    for (num = 2; num <= n; num++) { // Start from 2 since 1 is not a prime number
        count = 0; // Reset the count for each number

        for (i = 2; i <= num / 2; i++) { // Check divisors from 2 to num/2
            if (num % i == 0) { // If divisible, it's not a prime number
                count++;
                break; // Exit the loop if a divisor is found
            }
        }

        // If count is still 0, the number is prime
        if (count == 0) {
            printf("%d ", num);
        }
    }

    printf("\n"); // Print a newline for cleaner output

    return 0; // Return 0 to indicate successful execution
}