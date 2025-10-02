/*
MARION MWIKALI MUTISYA
CT100/G/26273/25
Mbs purchase 
*/
#include <stdio.h>

int main() {
    int choice;

    // Ask the user to enter their choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Use if-else if-else to handle the selection
    if (choice == 1) {
        printf("You selected the 100 MB bundle at 50 KES.\n");
    } else if (choice == 2) {
        printf("You selected the 500 MB bundle at 200 KES.\n");
    } else if (choice == 3) {
        printf("You selected the 1 GB bundle at 350 KES.\n");
    } else if (choice == 4) {
        printf("You selected the 2 GB bundle at 600 KES.\n");
    } else {
        // Handle invalid input
        printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }

    return 0;
}
