#include <stdio.h>

/*
 * Q5: Write a program to convert temperature
 *     from Celsius to Fahrenheit.
 *
 *     Formula: F = (C * 9/5) + 32
 */

int main(void) {
    double celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
