/*
MARION MWIKALI MUTISYA 
CT100/G/26273/25
ElectricBill
*/

#include <stdio.h>

float calculateElectricBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    float totalBill = calculateElectricBill(units);
    printf("Total Electric Bill = KSh. %.2f\n", totalBill);

    return 0;
}