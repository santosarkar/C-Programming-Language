#include <stdio.h>  // Includes standard I/O functions.

int main() {  // Program execution starts here.
    int num = 7;  // Initializes integer variable 'num' with value 7.

    // If-Else Control Structure
    if (num % 2 == 0) {  // Checks if 'num' is even.
        printf("%d is even\n", num);  // Executes if condition is true.
    } else {
        printf("%d is odd\n", num);   // Executes if condition is false.
    }

    // Switch Case Control Structure
    switch (num) {
        case 1:  // If 'num' equals 1.
            printf("Number is one\n");
            break;  // Exits the switch block.
        case 7:  // If 'num' equals 7.
            printf("Number is seven\n");
            break;
        default:  // If 'num' doesn't match any case.
            printf("Number is not one or seven\n");
    }

    // For Loop
    printf("For Loop:\n");
    for (int i = 0; i < 3; i++) {  // Loops from i = 0 to i < 3.
        printf("Iteration %d\n", i);  // Prints current iteration.
    }

    // While Loop
    printf("While Loop:\n");
    int count = 0;  // Initializes 'count' to 0.
    while (count < 3) {  // Loops while 'count' is less than 3.
        printf("Count is %d\n", count);  // Prints current count.
        count++;  // Increments 'count' by 1.
    }

    // Do-While Loop
    printf("Do-While Loop:\n");
    count = 0;  // Resets 'count' to 0.
    do {
        printf("Count is %d\n", count);  // Prints current count.
        count++;  // Increments 'count' by 1.
    } while (count < 3);  // Checks condition after executing loop body.

    return 0;  // Program ends successfully.
}
