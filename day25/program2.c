#include <stdio.h>
int main() {
    int i, j, k;                           //Declaration  
    for ( i = 5; i >= 1; i-- ) {           //Outer loop
        for ( j = i; j < 5; j++ ) {        //Inner loop to print the required spaces         
            printf(" ");                   //Output Statement to print the space
        }
        for ( k = 1; k <= i; k++ ) {       //Inner loop to print asterisk sign
            printf("*");                   //Output statement to print asterisk sign
        }
        printf("\n");                      //Output Statement to bring cursor to the next line  
    }
    return 0;
}
