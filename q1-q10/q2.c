#include <stdio.h>

/*
 * Q2: Write a program to input two numbers and display their
 *     sum, difference, product, and quotient.
 *     Division by zero should be handled carefully.
 */

int main(void) {
    double a, b;
    double sum, diff, prod, quot;

    printf("Enter two numbers separated by space: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    sum  = a + b;
    diff = a - b;
    prod = a * b;

    printf("Sum       = %.2f\n", sum);
    printf("Difference= %.2f\n", diff);
    printf("Product   = %.2f\n", prod);

    if (b != 0.0) {
        quot = a / b;
        printf("Quotient  = %.2f\n", quot);
    } else {
        printf("Quotient  = undefined (division by zero)\n");
    }

    return 0;
}
