#include <stdio.h>

int main() {
    char name[20];      // Consumer name
    int meterNo;        // Meter number
    int initial, final; // Initial and final readings
    int units;          // Total units consumed
    float bill;         // Bill amount

    // Input
    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Meter No: ");
    scanf("%d", &meterNo);

    printf("Enter Initial Reading: ");
    scanf("%d", &initial);

    printf("Enter Final Reading: ");
    scanf("%d", &final);

    // Calculate units and bill
    units = final - initial;
    bill = units * 3.50;

    // Output
    printf("\n--- Electricity Bill ---\n");
    printf("Name       : %s\n", name);
    printf("Meter No   : %d\n", meterNo);
    printf("Units Used : %d\n", units);
    printf("Bill Amount: Rs %.2f\n", bill);

    return 0;
}
