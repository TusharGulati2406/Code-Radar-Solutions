#include <stdio.h>

int main() {
    int N;

    // Input: Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &N);

    // Output: Print multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}