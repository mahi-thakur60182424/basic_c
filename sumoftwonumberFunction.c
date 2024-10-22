#include <stdio.h>

// Function to calculate sum of two numbers
int calculateSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to calculate the sum
    result = calculateSum(num1, num2);

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
