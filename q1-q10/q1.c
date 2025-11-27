#include <stdio.h>

/*
 * Q1: Write a program to input two numbers and display their sum.
 */

int main(void) {
    int a, b, sum;

    printf("Enter two integers separated by space: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    sum = a + b;
    printf("Sum = %d\n", sum);

    return 0;
}
