#include <stdio.h>
int main(){
    int num;  // Declare an integer variable
    scanf("%d", &num);  // Read an integer from the user
    
    // Print the hexadecimal representation
    printf("Hexadecimal: %x\n", num);
    
    // Print the octal representation
    printf("Octal: %o\n", num);

    return 0;
}