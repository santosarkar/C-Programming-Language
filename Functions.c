#include <stdio.h>  // Includes standard I/O functions.

// Function prototype for 'multiply'.
int multiply(int x, int y);  // Declares a function that takes two integers and returns an integer.

int main() {  // Program execution starts here.
    int num1 = 4;  // Initializes 'num1' with 4.
    int num2 = 5;  // Initializes 'num2' with 5.
    int result = multiply(num1, num2);  // Calls 'multiply' and stores result.

    printf("Result: %d\n", result);  // Prints the multiplication result.

    return 0;  // Program ends successfully.
}

// Function definition for 'multiply'.
int multiply(int x, int y) {  // Takes two integers 'x' and 'y'.
    int product = x * y;  // Calculates the product of 'x' and 'y'.
    return product;  // Returns the product.
}
