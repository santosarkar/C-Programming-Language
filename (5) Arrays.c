#include <stdio.h>  // Includes standard I/O functions.

int main() {  // Program execution starts here.
    int numbers[5];  // Declares an integer array of size 5.

    // Initializing array elements.
    numbers[0] = 10;  // Assigns 10 to the first element.
    numbers[1] = 20;  // Assigns 20 to the second element.
    numbers[2] = 30;  // Assigns 30 to the third element.
    numbers[3] = 40;  // Assigns 40 to the fourth element.
    numbers[4] = 50;  // Assigns 50 to the fifth element.

    // Accessing array elements.
    for (int i = 0; i < 5; i++) {  // Loops from i = 0 to i < 5.
        printf("Element at index %d: %d\n", i, numbers[i]);  // Prints each element.
    }

    // Calculating the sum of array elements.
    int sum = 0;  // Initializes sum to 0.
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];  // Adds each element to sum.
    }
    printf("Sum of array elements: %d\n", sum);  // Prints the total sum.

    return 0;  // Program ends successfully.
}
