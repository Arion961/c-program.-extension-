/*
MARION MWIKALI MUTISYA 
CT100/G/26273/25
Fare charged per distance 
*/

#include <stdio.h>

float calculateFare(float distance) {
    float ratePerKm = 50.0;
    return distance * ratePerKm;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    float totalFare = calculateFare(distance);
    printf("Total Fare = KSh. %.2f\n", totalFare);

    return 0;
}