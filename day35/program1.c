#include <stdio.h>
int main() {
    int n, i;                     //Declaration     
    printf("Enter the elememts you want to enter");
    scanf("%d", &n);                     //Accepting value from the uset              
    int a[n];                            //Declaration of array variable  
    printf("Enter the elements one by one in a sorted way either in ascending or descending order \n ");
    for ( i=0 ; i <= n; i++ ) {
        scanf("%d", &a[i]);          //Accepting value from the user
    }
     if ( a[0] < a[1] ) {           //Checking condition to display output accordingly
        printf("Second largest element is: %d \n", a[n-2]);
     }
     else {
        printf("Second largest number is: %d \n", a[1]);
     }
     return 0;
    }
