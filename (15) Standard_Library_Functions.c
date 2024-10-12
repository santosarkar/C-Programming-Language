#include <stdio.h>   // Includes standard I/O functions.
#include <stdlib.h>  // Includes standard library functions.
#include <math.h>    // Includes math functions.

int main() {  // Program execution starts here.
    char numberStr[] = "12345";  // String representing a number.

    // Converting string to integer
    int number = atoi(numberStr);  // Converts 'numberStr' to integer 'number'.
    printf("Integer value: %d\n", number);  // Prints the integer value.

    // Using math functions
    double squareRoot = sqrt((double)number);  // Calculates square root of 'number'.
    printf("Square root of %d: %.2f\n", number, squareRoot);  // Prints the square root.

    // Generating random numbers
    srand((unsigned int)time(NULL));  // Seeds the random number generator.
    int randomNum = rand() % 100;  // Generates a random number between 0 and 99.
    printf("Random Number: %d\n", randomNum);  // Prints the random number.

    return 0;  // Program ends successfully.
}
