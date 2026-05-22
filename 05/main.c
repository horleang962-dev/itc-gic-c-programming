#include <stdio.h>
#include "01.h"
#include "02.h"
int main(void) {
    double r = 5.0;
    double w = 4.0, h = 6.0;

    printf("Circle (radius=%.1f)\n", r);
    printf("  area= %.2f\n", circle_area(r));
    printf("  circumference = %.2f\n", circle_circumference(r));

    printf("Rectangle (%.1f x %.1f)\n", w, h);
    printf("  area      = %.2f\n", rectangle_area(w, h));
    printf("  perimeter = %.2f\n", rectangle_perimeter(w, h));

    return 0;
}