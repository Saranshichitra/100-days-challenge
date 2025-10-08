#include <stdio.h>
int main() { 
    int i, j;                             //Declaration
    for ( i = 5; i >= 1; i-- ) {          //Outer loop
        for ( j = 5; j >= i; j-- ) {      //Inner loop  
        printf("%d", j);                  //Output statement
        }
        printf("\n");                     //To bring the cursor to the next line
    }
    return 0;
}
