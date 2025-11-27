#include <stdio.h>

/*
 * Q6: Write a program to swap two numbers
 *     using a third variable.
 */

int main(void) {
    int a, b, temp;

    printf("Enter two integers (a and b): ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Before swapping: a = %d, b = %d\n", a, b);

    /* Swapping using a third variable */
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}
