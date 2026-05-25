#include <stdio.h>
#include "rectangle.h" // Includes our custom blueprint

int main() {
    // 1. Declaring and initializing variables using 'double'

    double width = 5.5;
    double height = 10.0;
    double perimeter = 0.0;
    double area = 0.0;

    // 2. Calling functions to perform variable manipulation

    perimeter = calculatePerimeter(width, height);
    area = calculateArea(width, height);

    // 3. Displaying precision output using %.2f (2 decimal places)

    printf("Rectangle Width:  %.2f\n", width);
    printf("Rectangle Height: %.2f\n", height);
    printf("-------------------------\n");
    printf("Calculated Perimeter is: %.2f\n", perimeter);
    printf("Calculated Area is:      %.2f\n", area);

    return 0;
}