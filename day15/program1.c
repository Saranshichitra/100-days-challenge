#include <stdio.h>
int main() {
    int n, i, p=1;                                           //Declaration and Initialization
    printf("Enter the number\n");
    scanf("%d", &n);                                         //Accepting value from the user
    for ( i = n; i >= 1; i-- ) {
        p = p * i;
    }
    printf("Factorial of %d is %d\n", n, p);                 //Output Statement
    return 0;
}