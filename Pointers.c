#include <stdio.h>  // Includes standard I/O functions.

int main() {  // Program execution starts here.
    int var = 100;  // Declares an integer variable 'var' and initializes it to 100.
    int *ptr;  // Declares a pointer to an integer.

    ptr = &var;  // Assigns the address of 'var' to the pointer 'ptr'.

    // Accessing the value and address using the pointer.
    printf("Value of var: %d\n", var);            // Prints the value of 'var'.
    printf("Address of var: %p\n", (void *)&var); // Prints the address of 'var'.
    printf("Pointer ptr points to: %p\n", (void *)ptr); // Prints the address stored in 'ptr'.
    printf("Value pointed by ptr: %d\n", *ptr);   // Dereferences 'ptr' to get the value.

    // Modifying the value using the pointer.
    *ptr = 200;  // Changes the value at the address 'ptr' points to.
    printf("New value of var: %d\n", var);  // Prints the updated value of 'var'.

    return 0;  // Program ends successfully.
}
