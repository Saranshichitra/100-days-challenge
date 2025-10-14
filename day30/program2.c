#include <stdio.h>
int main() {
    int n, i, positive = 0, negative = 0, zero = 0;    //Declaration and Initialization
    printf("How many elements are to be stored\n");
    scanf("%d", &n);                                   //Accepting value from the user 
    int a[n];                                          //Declaration of array
    printf("Enter the values one by one\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);                           //Accepting array elements from user using loop
    }
    for ( i = 0; i < n; i++ ) {
        if ( a[i] == 0 ) {
            zero++;
        }
         else if ( a [i] > 0 ) {
            positive++;
        }
        else {
            negative++;
        }
    }
    printf("\n");
    printf("Positive numbers = %d\n", positive);    //Output statement to print the total number of positive values in the array 
    printf("Negative numbers = %d\n", negative);    //Output statement to print the total number of negative values in the array
    printf("Zeros %d", zero);                       //Output statement to print the total number of zeros in the array  
    return 0;
}
