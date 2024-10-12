#include <stdio.h>  // Includes standard I/O functions.

int main(int argc, char *argv[]) {  // 'argc' is argument count, 'argv' is argument vector.
    printf("Number of arguments: %d\n", argc);  // Prints number of arguments.

    // Loop through each argument and print it.
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);  // Prints each argument.
    }

    return 0;  // Program ends successfully.
}
