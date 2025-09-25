#include <stdio.h>
int main() { 
    int n, amount;                                                                                        //Declaration
    printf("How much unit of electricity is consumed:\n");
    scanf("%d", &n);                                                                                     //Accepting value from the user
    if ( n <= 0) {                                                                                       //If no electricity is consumed by the user
           printf("No amount is to be paid as no electricity is consumed");
    }
    else if ( n <= 100 ) {                                                                               //If electricity consumed is 1 - 100 units
        amount = n * 5;
        printf("Amount to be paid for %d units of electricity consumed is %d\n", n, amount);
    }
    else if ( n <= 200 ) {                                                                              //If electricity consumed is 101 - 200 units                                                                                                    
        amount = ( 100* 5 ) + ( n - 100 ) * 7;                     
        printf("Amount to be paid for %d units of electricity consumed is %d\n", n, amount);
    }
    else if ( n <= 300 ) {                                                                             //If electricity consumed is 201 - 300 units
        amount = ( 100 * 5 ) + ( 100 * 7 ) + ( n - 200 ) * 10;
        printf("Amount to be paid for %d units of electricity consumed is %d\n", n, amount);
    }
    else  {                                                                                           //If electricity consumption is greater than 300
        amount = ( 100 * 5 ) + ( 100 * 7 ) + ( 100 * 10 ) + ( n - 300 ) * 12;
        printf("Amount to be paid for %d units of electricity consumed is %d\n", n, amount);
    }
    return 0;
}