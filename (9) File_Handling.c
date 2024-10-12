#include <stdio.h>  // Includes standard I/O functions.

int main() {  // Program execution starts here.
    FILE *filePtr;  // Declares a file pointer.

    // Writing to a file
    filePtr = fopen("example.txt", "w");  // Opens 'example.txt' in write mode.
    if (filePtr == NULL) {  // Checks if file was opened successfully.
        printf("Error opening file!\n");  // Prints error message.
        return 1;  // Exits program with error code.
    }
    fprintf(filePtr, "This is a file handling example.\n");  // Writes to the file.
    fclose(filePtr);  // Closes the file after writing.

    // Reading from a file
    char buffer[100];  // Buffer to store read data.
    filePtr = fopen("example.txt", "r");  // Opens 'example.txt' in read mode.
    if (filePtr == NULL) {  // Checks if file was opened successfully.
        printf("Error opening file!\n");
        return 1;
    }
    fgets(buffer, 100, filePtr);  // Reads a line from the file into 'buffer'.
    printf("File Content: %s\n", buffer);  // Prints the content read from the file.
    fclose(filePtr);  // Closes the file after reading.

    return 0;  // Program ends successfully.
}
