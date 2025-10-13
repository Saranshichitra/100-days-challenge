#include <stdio.h>
int main() {
    int n, i, sum = 0, max, min;                          //Declaration and Initialization
    printf("How many elements are to be stored\n");
    scanf("%d", &n);                                     //Accepting value from the user
    int a[n];                                            //Declaration of array
    printf("Enter the values one by one\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);                             //Accepting array elements from user using loop
    }
    max = a[n - 2];
    min = a[n - 2];
    for ( i = 0; i < n; i++ ) {
        if ( a[i] > max ) {
            max = a[i];
        }
         if ( a[i] < min ) {
            min = a[i];
        }
    }
    printf("\n");
    printf("Max = %d\n", max);                     //Output statement to print the maximum value of the array
    printf("Min = %d", min);                       //Output statement to print the minimum value of the array
    return 0;
}
