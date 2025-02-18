#include <stdio.h>

int main() {
    int num1, num2;  // Declare two integer variables
    
    // Input two integers

    scanf("%d %d", &num1, &num2);
    
    // Check the conditions using logical AND (&&) and OR (||)
    if ((num1 > 0 && num2 < 0) || (num1 == 0 && num2 == 0)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
