//simple c program (hello c)
/*
Marion Mwikali Mutisya 
CT100/G/26273/25
SURFACE AREA AND VOLUME
*/

#include <stdio.h>
#define PI 3.1416   // define pi value

int main() {
    float r, h, volume, surface_area;

    // Ask user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &r);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &h);

    // Calculate volume and surface area
    volume = PI * r * r * h;
    surface_area = 2 * PI * r * r + 2 * PI * r * h;

    // Display results
    printf("\nFor Radius = %.2f and Height = %.2f\n", r, h);
    printf("Volume of cylinder = %.2f\n", volume);
    printf("Surface Area of cylinder = %.2f\n", surface_area);

    return 0;
}