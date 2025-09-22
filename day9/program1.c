#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, r1, r2;                                                                    //Declaration
    printf("Enter the value of a,b and c for the quadratic equation ax^2 + bx + c=0\n");
    scanf("%f %f %f", &a, &b, &c);                                                               //Accepting Value from the user
    d = (b * b) - (4 * a *c);                                                                    //Formula to calculate the Discriminant
    r1 = (-b + sqrt(d)) / (2*a);                                                                 //Calculating root1
    r2 = (-b - sqrt(d)) / (2*a);                                                                  //Calculating root2
    if(d > 0) {
        printf("Roots are Real and Distinct: %f , %f", r1, r2);
    }
    else if(d < 0) {
        printf("Roots are Imaginary: %f , %f", r1, r2);
    }
    else {
        printf("Roots are Real and Equal: %f , %f", r1, r2);
    }
    return 0;
}