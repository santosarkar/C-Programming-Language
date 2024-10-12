#include <stdio.h>  // Includes standard I/O functions.
#include <string.h> // Includes string handling functions.

// Defining a structure 'Student'.
struct Student {
    char name[50];  // Member to store student's name.
    int rollNumber; // Member to store roll number.
    float marks;    // Member to store marks.
};

// Defining a union 'Data'.
union Data {
    int intValue;    // Integer member.
    float floatValue; // Float member.
    char str[20];    // String member.
};

int main() {  // Program execution starts here.
    // Working with structure
    struct Student student1;  // Declares a variable 'student1' of type 'Student'.
    strcpy(student1.name, "Alice");  // Assigns name to 'student1'.
    student1.rollNumber = 101;       // Assigns roll number.
    student1.marks = 95.5;           // Assigns marks.

    // Printing structure members
    printf("Student Information:\n");               // Prints header.
    printf("Name: %s\n", student1.name);            // Prints name.
    printf("Roll Number: %d\n", student1.rollNumber); // Prints roll number.
    printf("Marks: %.2f\n", student1.marks);        // Prints marks.

    // Working with union
    union Data data;  // Declares a union variable 'data'.

    data.intValue = 10;  // Assigns value to 'intValue' member.
    printf("Data as int: %d\n", data.intValue);  // Prints 'intValue'.

    data.floatValue = 220.5;  // Assigns value to 'floatValue' member.
    printf("Data as float: %.2f\n", data.floatValue);  // Prints 'floatValue'.

    strcpy(data.str, "Hello");  // Assigns string to 'str' member.
    printf("Data as string: %s\n", data.str);  // Prints 'str'.

    // Note: In union, memory is shared among all members.

    return 0;  // Program ends successfully.
}
