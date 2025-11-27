#include <stdio.h>

/*
 * Q7: Write a program to swap two numbers
 *     without using a third variable.
 *
 *     Note: This method uses arithmetic and may overflow
 *           for very large integers, but is fine for typical use.
 */

int main(void) {
    int a, b;

    printf("Enter two integers (a and b): ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Before swapping: a = %d, b = %d\n", a, b);

    /* Swapping without third variable */
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}
