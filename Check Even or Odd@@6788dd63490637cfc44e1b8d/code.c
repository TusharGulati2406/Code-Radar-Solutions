#include <stdio.h>

int main() {
    int num;  // Declare an integer variable
    
    // Input the integer
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("%d is even\n", num);  // If divisible by 2, it's even
    } else {
        printf("%d is odd\n", num);  // Otherwise, it's odd
    }

    return 0;
}

