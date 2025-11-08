/*
Name: SAMMY KIOKO KAMENE
Reg No: CT101/G/26524/25
Date: 6/11/2025
Description: A C program that demonstrates a 2D array declaration,
             initialization, and printing using nested loops.
*/

#include <stdio.h>

int main() {
    // i. Definition:
    // An array is a collection of elements of the same data type
    // stored in contiguous memory locations.

    // ii. Declare and initialize a 2D array named 'scores'
    int scores[4][2] = {
        {65, 92},
        {84, 72},
        {35, 70},
        {59, 67}
    };

    // iii. Print elements using nested for loop
    printf("Elements of the 2D array 'scores':\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}