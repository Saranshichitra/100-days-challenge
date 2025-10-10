#include <stdio.h>
int main() {
    int i, j;                                         //Declaration
                                                      //1st Nested Loop
    for ( i = 1; i <= 5; i++ ) {                      //Outer Loop    
        for ( j = 1; j <= i; j++ ) {                  //Inner Loop
            printf("*");                              //Required Output statement
        }
        printf("\n");                                 //Statement to bring the cursor to the next Line
    }
                                                      //2nd Nested Loop   
    for ( i = 4; i >= 1; i-- ) {                      //Outer Loop                       
        for ( j = 1; j <= i; j++ ) {                  //Inner Loop    
            printf("*");                              //Required Output Statement  
        }
        printf("\n");                                 //Statement to bring the cursor to the next Line
    }
    return 0;
}
