#include <stdio.h>
int main() {
    int n, i, even = 0, odd = 0;                           //Declaration and Initialization
    printf("How many elements are to be stored\n");
    scanf("%d", &n);                                      //Accepting value from the user
    int a[n];                                             //Declaration of array
    printf("Enter the values one by one\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);                              //Accepting array elements from user using loop
    }
    for ( i = 0; i < n; i++ ) {
        if ( a[i] % 2 == 0 ) {
            even++;
        }
         else {
            odd++;
        }
    }
    printf("\n");
    printf("Even = %d\n", even);                     //Output statement to print the total number of even values in the array
    printf("Odd = %d", odd);                         //Output statement to print the total number of odd values in the array
    return 0;
}
