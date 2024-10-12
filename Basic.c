#include <stdio.h>                              // Includes the standard input-output library for input and output functions.

int main() {                                    // Main function where the program execution starts.
    int num1, num2, sum;                        // Declares three integer variables: num1, num2, and sum.

    printf("Enter two numbers: ");              // Prints a message asking the user to enter two numbers.
    scanf("%d %d", &num1, &num2);               // Reads two integer inputs from the user and stores them in num1 and num2.

    sum = num1 + num2;                          // Adds num1 and num2 and stores the result in the variable sum.

    printf("Sum: %d\n", sum);                   // Prints the result (sum) of the two numbers.

    return 0;                                   // Ends the main function and returns 0 to indicate successful execution.
}              
