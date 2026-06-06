int main() {
    int num, temp, digit, sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        fact = 1;
        
        // Calculate factorial of the digit
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        
        sum += fact;
        temp /= 10;
    }

    if (sum == num) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is NOT a Strong Number.\n", num);
    }

    return 0;
}