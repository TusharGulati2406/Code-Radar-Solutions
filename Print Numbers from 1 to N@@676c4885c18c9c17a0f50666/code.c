#include <stdio.h>

int main() {
    int N;
    
    // Input the number N
    printf("Enter a number N: ");
    scanf("%d", &N);
    
    // Loop to print numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        printf("%d ", i);  // Print each number followed by a space
    }
    
    printf("\n");  // Move to the next line after printing all numbers
    
    return 0;
}
