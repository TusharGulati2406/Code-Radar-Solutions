#include <stdio.h>
int main() {
    char str1[100], str2[100];  // Declare two string arrays
    
    // Input two strings
    scanf("%s %s", str1, str2);
    
    // Print the strings
    printf("First string: %s\n", str1);  // Expected to print "c"
    printf("Second string: %s\n", str2); // Expected to print "prog"

    return 0;
}