#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0; // Numbers less than 2 are not prime
    if (n == 2 || n == 3) return 1; // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return 0; // Eliminate multiples of 2 and 3

    // Check divisibility from 5 to sqrt(n), skipping even numbers
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0; // Not prime
    }
    
    return 1; // Prime
}

int main() {
    int num;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is prime
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

