#include <stdio.h>

int main() {
    int year;  // Declare an integer variable for the year
    
    // Input the year

    scanf("%d", &year);
    
    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n", year);  // Year is a leap year
    } else {
        printf("Not a Leap year\n", year);  // Year is not a leap year
    }

    return 0;
}
