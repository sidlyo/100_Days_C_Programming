#include <stdio.h>

/*
 * Q8: Write a program to find and display the sum
 *     of the first n natural numbers.
 */

int main(void) {
    int n;
    long long sum = 0;
    int i;

    printf("Enter n (positive integer): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n <= 0) {
        printf("n should be a positive integer.\n");
        return 1;
    }

    /* You can also use the formula n*(n+1)/2.
       Here we use a loop for clarity. */
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %lld\n", n, sum);

    return 0;
}
