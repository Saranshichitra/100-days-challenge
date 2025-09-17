#include <stdio.h>
#include <math.h>                                                                // for pow()

int main() {
    float p, r, t, si, ci;                                                       //Declaration
      printf("Enter the value of Principal,rate and time respectively");         //p=Principal , t=Time , r=Rate , si=Simple Interest and ci=Compound Interest     printf("Enter Principal, Rate, and Time: ");                     
     scanf("%f %f %f", &p, &r, &t);                                              //Accepting value from the user
     si = (p * r * t) / 100.0;                                                   //Formula to calculate Simple Interest
    ci = p * pow((1 + r / 100), t) - p;                                          //Formula to calculate Compound Interest
    printf("Simple Interest = %.2f\n", si);                                      //Output Statements
    printf("Compound Interest = %.2f\n", ci);
    return 0;
}