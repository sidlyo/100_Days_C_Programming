#include <stdio.h>

/*
 * Q10: Write a program to input time in seconds and
 *      convert it to hours:minutes:seconds format.
 */

int main(void) {
    int total_seconds;
    int hours, minutes, seconds, remaining_seconds;

    printf("Enter time in seconds: ");
    if (scanf("%d", &total_seconds) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (total_seconds < 0) {
        printf("Time cannot be negative.\n");
        return 1;
    }

    hours = total_seconds / 3600;
    remaining_seconds = total_seconds % 3600;

    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;

    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
