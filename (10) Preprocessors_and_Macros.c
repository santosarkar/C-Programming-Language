#include <stdio.h>  // Includes standard I/O functions.
#define PI 3.14159   // Defines a macro 'PI' with value 3.14159.
#define AREA(r) (PI * (r) * (r))  // Macro to calculate area of a circle.

int main() {  // Program execution starts here.
    int radius = 5;  // Declares an integer 'radius' and initializes it to 5.
    double area = AREA(radius);  // Uses 'AREA' macro to calculate area.

    printf("Area of circle with radius %d: %.2f\n", radius, area);  // Prints the area.

    // Conditional Compilation
    #ifdef DEBUG  // Checks if 'DEBUG' is defined.
        printf("Debug mode is ON.\n");  // Executes if 'DEBUG' is defined.
    #else
        printf("Debug mode is OFF.\n");  // Executes if 'DEBUG' is not defined.
    #endif

    return 0;  // Program ends successfully.
}
