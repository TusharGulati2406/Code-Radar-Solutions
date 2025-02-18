#include <stdio.h>
int main() {
    char str1[100], str2[100];  // Declare two string arrays
    
    // Input two strings
    scanf("%s %s", str1, str2);
    
    // Print the strings
    printf("You entered: %s,%s", str1,str2);  // Expected to print "c"
   

    return 0;
}