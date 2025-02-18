#include <stdio.h>

int main() {
    int num1, num2;  // Declare two integer variables
    
    // Input two integers
    scanf("%d %d", &num1, &num2);
    
    // Check if the first number is greater than the second
    if (num1 > num2) {
        printf("True\n");  // Output "true" if num1 is greater than num2
    } else {
        printf("false\n");  // Output "false" otherwise
    }

    return 0;
}
