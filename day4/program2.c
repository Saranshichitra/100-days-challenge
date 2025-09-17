#include <stdio.h>
int main() {
    int n, i, sum=0;                                                      //declaration and initialization
    printf("Enter the number till where you want to find the sum");
    scanf("%d", &n);                                                     //accepting value from the user
    for ( i = 1; i <= n; i++ ) {                                         //finding the sum using looping construct
        sum = sum + i;
    }
printf("Sum of first %d natural numbers is %d\n", n, sum);               //output statement
return 0;   
}