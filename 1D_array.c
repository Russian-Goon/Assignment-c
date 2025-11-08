/*
Name: Sanny kioko Kamene
Reg No: CT101/G/26524/G
Date: 29/10/2025
Description: Program uses a 2D array to simulate room occupancy for 5 floors with 10 rooms each, showing occupied and vacant rooms per floor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10], floor, room, occupied, vacant;

    srand(time(0));

    printf("=== Room Occupancy Tracker ===\n\n");

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d - Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}