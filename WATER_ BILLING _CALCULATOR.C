
/*
Name:KAMENE SAMMY KIOKO
Regestraion number:CT101/G/26524/25
Description:      A.PROGRAM TO CALCULATE A WATER BILLING SYSTEM
          
*/
#include <stdio.h>

float calculateElectricBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    printf("Total Bill = KSh. %.2f\n", calculateElectricBill(units));
    return 0;
}