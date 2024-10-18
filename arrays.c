#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    // Access and print elements of the array
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Modify an element
    numbers[2] = 10;

    // Print modified array
    printf("\nAfter modification:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
