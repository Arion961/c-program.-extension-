//simple c program (hello c)
/*
Marion Mwikali Mutisya 
CT100/G/26273/25
ELIGIBLE FOR LOAN OR NOT 
*/
#include <stdio.h>

int main() {
    int age;
    float income;

    // Prompt the user for input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (in shillings): ");
    scanf("%f", &income);

    // Check loan eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}