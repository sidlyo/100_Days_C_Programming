#include <stdio.h>

/*
 * Q3: Write a program to calculate the area and perimeter
 *     of a rectangle given its length and breadth.
 */

int main(void) {
    double length, breadth, area, perimeter;

    printf("Enter length and breadth of the rectangle: ");
    if (scanf("%lf %lf", &length, &breadth) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of rectangle      = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}
