#include <stdio.h>
#include <math.h>

/*
 * Q9: Write a program to calculate simple and compound interest
 *     for given principal, rate, and time.
 *
 *     Simple Interest  (SI) = (P * R * T) / 100
 *     Compound Interest(CI) = P * ( (1 + R/100)^T - 1 )
 */

int main(void) {
    double principal, rate, time;
    double simple_interest, compound_interest, amount;

    printf("Enter principal, rate (in %%), and time (in years): ");
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    /* Simple Interest */
    simple_interest = (principal * rate * time) / 100.0;

    /* Compound Interest */
    amount = principal * pow((1.0 + rate / 100.0), time);
    compound_interest = amount - principal;

    printf("Simple Interest   = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
