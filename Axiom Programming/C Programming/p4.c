#include <stdio.h>

int main() {
    float r, d, c, a;   // r = radius, d = diameter, c = circumference, a = area
    float pi = 3.14;

    printf("Enter radius: ");
    scanf("%f", &r);

    d = 2 * r;            // Diameter
    c = 2 * pi * r;       // Circumference
    a = pi * r * r;       // Area

    printf("\nDiameter      = %.2f", d);
    printf("\nCircumference = %.2f", c);
    printf("\nArea          = %.2f\n", a);

    return 0;
}
