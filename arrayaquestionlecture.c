#include <stdio.h>

#define SIZE 7

int main() {
    int array1[SIZE], array2[SIZE], array3[SIZE];
    int i;

    // Input elements for first array
    printf("Enter 7 elements for the first array:\n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array1[i]);
    }

    // Input elements for second array
    printf("Enter 7 elements for the second array:\n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &array2[i]);
    }

    // Example: Store the sum of corresponding elements from array1 and array2 in array3
    for (i = 0; i < SIZE; i++) {
        array3[i] = array1[i] + array2[i];  // You can change this logic
    }

    // Output the elements of the third array
    printf("Elements of the third array (sum of corresponding elements):\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", array3[i]);
    }

    return 0;
}
// done 