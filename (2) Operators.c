#include <stdio.h>  // Includes standard I/O functions.

int main() {  // Program execution starts here.
    int a = 10;  // Initializes integer variable 'a' with value 10.
    int b = 3;   // Initializes integer variable 'b' with value 3.
    
    // Arithmetic Operators
    int sum = a + b;        // Adds 'a' and 'b', stores in 'sum'.
    int difference = a - b; // Subtracts 'b' from 'a', stores in 'difference'.
    int product = a * b;    // Multiplies 'a' and 'b', stores in 'product'.
    int quotient = a / b;   // Divides 'a' by 'b', stores in 'quotient'.
    int remainder = a % b;  // Finds remainder of 'a' divided by 'b', stores in 'remainder'.

    // Output the results
    printf("Sum: %d\n", sum);                 // Prints the sum.
    printf("Difference: %d\n", difference);   // Prints the difference.
    printf("Product: %d\n", product);         // Prints the product.
    printf("Quotient: %d\n", quotient);       // Prints the quotient.
    printf("Remainder: %d\n", remainder);     // Prints the remainder.

    // Relational Operators
    if (a > b) {  // Checks if 'a' is greater than 'b'.
        printf("a is greater than b\n");  // Executes if condition is true.
    }

    // Logical Operators
    if ((a > b) && (b > 0)) {  // Checks if both conditions are true.
        printf("Both conditions are true\n");  // Executes if true.
    }

    // Increment and Decrement Operators
    a++;  // Increments 'a' by 1.
    b--;  // Decrements 'b' by 1.
    printf("After increment, a: %d\n", a);  // Prints new value of 'a'.
    printf("After decrement, b: %d\n", b);  // Prints new value of 'b'.

    return 0;  // Program ends successfully.
}
