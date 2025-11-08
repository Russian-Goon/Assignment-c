/*
Name: Sammy kKioko Kamene
Reg No: CT101/G/26524/25
Date: 29/10/2025
Description: Program uses a 1D array to record daily hotel revenues, then calculates total and average weekly revenue.
*/

#include <stdio.h>

int main() {
    float revenue[7], total = 0, average;
    int i;

    printf("=== Weekly Revenue Tracker ===\n");

    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}