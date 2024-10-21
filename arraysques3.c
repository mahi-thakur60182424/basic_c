#include <stdio.h>

int main() {
    int dimensions[2];  // Array to store length and width
    int area;

    // Taking input for length and width
    printf("Enter the length of the rectangle: ");
    scanf("%d", &dimensions[0]);  // Storing length in dimensions[0]
    
    printf("Enter the width of the rectangle: ");
    scanf("%d", &dimensions[1]);  // Storing width in dimensions[1]

    // Calculating the area
    area = dimensions[0] * dimensions[1];

    // Displaying the area
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}
