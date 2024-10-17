#include <stdio.h>

int main() {
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is zero
    if (number == 0) {
        printf("The number is zero.\n");
    } 
    // Check if the number is even
    else if (number % 2 == 0) {
        printf("The number is even.\n");
    } 
    // Otherwise, it is odd
    else {
        printf("The number is odd.\n");
    }

    return 0;
}