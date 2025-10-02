/*MARION MWIKALI MUTISYA 
CT100/G/26273/25
Water bill 
*/
#include <stdio.h>

int main() {
    // Variable to store user input and the calculated bill
    int units;
    float total_bill = 0.0;

    // Task: Prompts the user to enter the number of water units consumed.
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Task: Uses if-else if-else statements to calculate the total bill.
    if (units >= 0 && units <= 30) {
        // i. 0-30 units -> 20 KES per unit
        total_bill = units * 20.0;
    } else if (units > 30 && units <= 60) {
        // ii. 31-60 units -> 25 KES per unit
        // The first 30 units are charged at 20 KES. The remaining are at 25 KES.
        total_bill = (30 * 20.0) + ((units - 30) * 25.0);
    } else if (units > 60) {
        // iii. Above 60 units -> 30 KES per unit
        // The first 30 units at 20 KES, the next 30 (31-60) at 25 KES, and the remainder at 30 KES.
        total_bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    } else {
        // Handle negative input
        printf("Invalid input. Units consumed cannot be negative.\n");
        return 1; // Exit with an error code
    }

    // Task: Displays the total bill in KES with two decimal places.
    printf("Total water bill: %.2f KES\n", total_bill);

    return 0;
}
