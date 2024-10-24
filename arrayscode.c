#include <stdio.h>

int main() {
    int rows, cols;

    // Input for number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array
    int array[rows][cols];

    // Taking input for the 2D array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Display the 2D array
    printf("\nThe 2D array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
