#include <stdio.h>

int main() {
    float r,a,c;
    float pi=3.1416;
    printf("Enter the value of radius");                    // Input radius
    scanf("%f", &r);
    a = pi * r * r;                                         // Calculate area and circumference
    c = 2 * pi * r;
    printf("Area=%.2f, Circumference=%.2f\n", a, c);        // Print results with 2 decimal places
return 0;
}