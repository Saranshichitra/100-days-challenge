#include <stdio.h>
int main() {
    int i, j;                                       //Declaration
                                                    //1st Nested Loop  
    for ( i = 1; i <= 5; i = i + 2 ) {              //Outer loop
        for ( j = 1; j <= i; j++ ) {                //Inner loop to print asterisk
            printf("*\n");                          //Output statement to print asterisk and bring cursor to the next line
        }
        printf("\n");                               //Output statement to leave the line     
    }
                                                     //2nd Nested Loop
        for ( i = 3; i >= 1; i = i - 2 ) {           //Outer loop   
            for ( j = 1; j <= i; j++ ) {             //Inner loop
                printf("*\n");                       //Output statement to print asterisk and bring cursor to the next line
            }     
        //  printf("\n");                            //Output statement to leave the line  
        }
    }
