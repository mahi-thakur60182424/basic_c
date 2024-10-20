#include <stdio.h>

int main() {
    // Declare and initialize two arrays
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};

    // Determine the size of the arrays
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    // Print elements of array1
    printf("Elements of array1: \n");
    for (int i = 0; i < size1; i++) {
        printf("%d ", array1[i]);
    }

    printf("\n\n");

    // Print elements of array2 // do    
    printf("Elements of array2: \n");
    for (int i = 0; i < size2; i++) {
        printf("%d ", array2[i]);
    }

    // Perform operations between
}