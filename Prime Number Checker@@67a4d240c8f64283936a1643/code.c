#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0; // 0 and 1 are not prime numbers
    if (n == 2 || n == 3) return 1; // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return 0; // Eliminate multiples of 2 and 3

    for (int i = 5; i * i <= n; i += 6) { // Check divisibility up to sqrt(n)
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    
    return 1;
}

// Example usage
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("%d\n", isPrime(num)); // Outputs 1 if prime, 0 if not

    return 0;
}


