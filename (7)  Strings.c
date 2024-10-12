#include <stdio.h>   // Includes standard I/O functions.
#include <string.h>  // Includes string handling functions.

int main() {  // Program execution starts here.
    char greeting[20] = "Hello";  // Declares and initializes a string.

    // String concatenation
    strcat(greeting, " World");  // Concatenates " World" to 'greeting'.

    // String length
    int length = strlen(greeting);  // Calculates the length of 'greeting'.

    // Output the string and its length
    printf("Greeting: %s\n", greeting);  // Prints the concatenated string.
    printf("Length: %d\n", length);      // Prints the length of the string.

    // Copying strings
    char copy[20];             // Declares another string 'copy'.
    strcpy(copy, greeting);    // Copies 'greeting' into 'copy'.
    printf("Copy: %s\n", copy);  // Prints the copied string.

    return 0;  // Program ends successfully.
}
