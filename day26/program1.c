#include <stdio.h>
int main() {
    int i, j, k;                                 //Declaration
    for ( i = 5; i >= 1; i-- ) {                 //Outer loop 
        for ( j = i; j > 1; j-- ) {              //Inner loop to print the required spaces
            printf(" ");                         //Output statement to print spaces
        }
        for ( k = 5; k >= i; k-- ) {            //Inner loop to print the number
            printf("%d", k);                    //Output statement to print the number
        }
        printf("\n");                           //Output Statement to bring cursor to the next line                   
    }
    return 0;
}
