#include <stdio.h>
int main() {
    int num1, num2, i, gcd, lcm;                                             //Declaration
    printf("Enter the 2 numbers\n");
    scanf("%d %d", &num1, &num2);                                           //Accepting value from the user 
    if ( num1 > num2 ) {
        for ( i = 1; i <= num1; i++ ) {
            if ((num1 % i == 0) && (num2 % i == 0)) {
                gcd = i;
            }
        }
    }
    else {
        for ( i = 1; i <= num2; i++ ) {
            if ((num1 % i == 0) && (num2 % i == 0)) {
                gcd = i;
            }
        }
    }
    lcm = ( num1 * num2 ) / gcd;
    printf("LCM of %d and %d is: %d", num1, num2, lcm);                 //Output Statement
    return 0;
}