#include <stdio.h>
int main() {
    int i, j, spaces;                                            //Declaration
                                                                 //1st Nested Loop 
     for (i = 1; i <= 4; i++) {                                  //Outer Loop
        for (spaces = 1; spaces <= 4 - i; spaces++) {            //Inner Loop (1) to print the required number of spaces
            printf(" ");                                         //Output Statement to print spaces
        }
      for (j = 1; j <= 2 * i - 1; j++) {                         //Inner Loop(2) to print asterisk
            printf("*");                                         //Output Statement to print asterisk
        }
        printf("\n");                                            //Statement to bring the cursor to the next Line
    }                                       
     for (i = 3; i >= 1; i--) {                                   //Outer Loop  
         for (spaces = 1; spaces <= 4 - i; spaces++) {            //Inner Loop (1) to print the required number of spaces
            printf(" ");                                          //Output Statement to print spaces
        }
       for (j = 1; j <= 2 * i - 1; j++) {                         //Inner Loop(2) to print asterisk   
            printf("*");                                          //Output Statement to print asterisk 
        }
        printf("\n");                                           //Statement to bring the cursor to the next Line
    }
   return 0;
}