#include <stdio.h>

int main() {
    float distance, time, fuel;
    
    // User input
    printf("Enter distance (in km): ");
    scanf("%f", &distance);

    // Calculations
    time = distance / 50;       // Speed = 50 km/h
    fuel = distance / 45;       // Mileage = 45 km/l

    // Output
    printf("\nTime required = %.2f hours\n", time);
    printf("Fuel required = %.2f liters\n", fuel);

    return 0;
}
