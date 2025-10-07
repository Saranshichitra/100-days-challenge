#include <stdio.h>
int main() {
    int i, j;                                        //Declaration
    for ( i = 1; i <= 5; i++ ) {                     //Outer Loop
        for ( j = 1; j <= i; j++ ) {                 //Inner Loop
            printf("%d", j);                         //Output Statement
        }
        printf("\n");                                //To bring the cursor to the next line
    }
    return 0;
}