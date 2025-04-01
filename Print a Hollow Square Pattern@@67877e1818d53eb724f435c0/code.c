#include <stdio.h>

void printHollowSquare(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Print star on the first and last row or first and last column
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the side length of the square: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("Side length must be at least 2.\n");
    } else {
        printHollowSquare(N);
    }

    return 0;
}
