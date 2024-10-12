#include <stdio.h>   // Includes standard I/O functions.
#include <errno.h>   // Includes error number definitions.
#include <string.h>  // Includes string handling functions.

int main() {  // Program execution starts here.
    FILE *filePtr;  // Declares a file pointer.

    filePtr = fopen("nonexistent.txt", "r");  // Attempts to open a non-existent file.
    if (filePtr == NULL) {  // Checks if file was opened successfully.
        printf("Error opening file: %s\n", strerror(errno));  // Prints error message.
        return 1;  // Exits program with error code.
    }

    // File operations would go here.

    fclose(filePtr);  // Closes the file if opened.
    return 0;  // Program ends successfully.
}
