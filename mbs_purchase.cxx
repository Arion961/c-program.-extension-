/*
MARION MWIKALI MUTISYA
CT100/G/26273/25
Mbs purchase 
*/
#include <stdio.h>

int main() {
    int choice;

    // Task 1: Displays the menu above.
    printf("Mobile Data Bundle Options:\n");
    printf("--------------------------------------\n");
    printf("| Option | Bundle | Cost (KES) |\n");
    printf("| 1      | 100 MB | 50         |\n");
    printf("| 2      | 500 MB | 200        |\n");
    printf("| 3      | 1 GB   | 350        |\n");
    printf("| 4      | 2 GB   | 600        |\n");
    printf("--------------------------------------\n");

    //  Asks the user to enter their choice (1-4).
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    //  Uses a switch statement to display the bundle selected and its cost.
    switch (choice) {
        case 1:
            printf("You selected the 100 MB bundle at 50 KES.\n");
            break;
        case 2:
            printf("You selected the 500 MB bundle at 200 KES.\n");
            break;
        case 3:
            printf("You selected the 1 GB bundle at 350 KES.\n");
            break;
        case 4:
            printf("You selected the 2 GB bundle at 600 KES.\n");
            break;
        default:
            printf("Invalid choice. \n");
            break;
    }

    return 0;
}
