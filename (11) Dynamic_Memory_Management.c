#include <stdio.h>   // Includes standard I/O functions.
#include <stdlib.h>  // Includes functions for memory allocation.

int main() {  // Program execution starts here.
    int n, i;  // Declares integers 'n' and 'i'.
    int *arr;  // Declares a pointer to an integer.

    printf("Enter number of elements: ");
    scanf("%d", &n);  // Reads the number of elements from user.

    // Allocating memory for 'n' integers.
    arr = (int *)malloc(n * sizeof(int));  // Allocates memory using malloc.
    if (arr == NULL) {  // Checks if memory allocation was successful.
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Reading elements from user.
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);  // Stores each element in the array.
    }

    // Displaying the elements.
    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Prints each element.
    }
    printf("\n");

    free(arr);  // Frees the allocated memory.

    return 0;  // Program ends successfully.
}
