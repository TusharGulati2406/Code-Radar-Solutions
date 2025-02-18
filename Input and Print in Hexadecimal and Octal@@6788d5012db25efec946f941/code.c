#include <stdio.h>
int main(){
    int num;  // Declare an integer variable
    scanf("%d", &num);  // Read an integer from the user
    
    // Print the hexadecimal representation
    printf("Hexadecimal: %x", num);
    
    // Print the octal representation
    printf("Octal: %o", num);

    return 0;
}