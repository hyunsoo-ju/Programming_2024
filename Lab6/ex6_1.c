#include <stdio.h>

float calculateCharges( int h );

int main(void) {
    int h1, h2, h3;
    printf("Enter the hours rented for 3 cars: ");
    scanf("%d %d %d", &h1, &h2, &h3);
    
    printf("  Car\t\tHours\t\tCharge\n");
    printf("    1\t\t%5d\t\t%3.2f\n", h1, calculateCharges(h1));
    printf("    2\t\t%5d\t\t%3.2f\n", h2, calculateCharges(h2));
    printf("    3\t\t%5d\t\t%3.2f\n", h3, calculateCharges(h3)); 
    printf("TOTAL\t\t%5d\t\t%3.2f\n", h1 + h2 + h3, calculateCharges(h1) + calculateCharges(h2) + calculateCharges(h3));

    return 0;
}

float calculateCharges( int h ) {
    if (h <= 8) {
        return 25 + h * 0.5;
    }
    if (h >= 13) {
        return 50 * ((h - 1) / 24 + 1) + h * 0.5;
    }
    return 25 + (h - 8) * 5 + h * 0.5;
}