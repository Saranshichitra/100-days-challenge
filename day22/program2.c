#include <stdio.h>
int main () {
    int num, i;                                                       //Declaration
    float sum = 1.0;                                                  //Initialization
    printf("Enter the number\n");
    scanf("%d", &num);                                                //Accepting value from the user 
    if ( num == 1 ) {
        sum = 1.0;
        printf("Approximate sum= %.1f", sum);                        //Output statement if the condition persists
    }
    else {
        for ( i = 2; i <= num + 1; i++) {
                sum = sum + (float)( i + ( i - 1 )) / (( i + i)) ;    //Calculating the series sum 
              }
        printf("Approximate sum= %.1f", sum);                         //Output statement if the loop executes
            }
        return 0;
    }
