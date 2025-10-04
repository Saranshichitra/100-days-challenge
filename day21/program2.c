#include <stdio.h>
int main() {
    int num, sum = 0;                                           //Initialization and Declaration
    printf("Enter the number:\n");
    scanf("%d", &num);                                         //Accepting value from the user 
    for ( int i = 1; i < num; i++ ) {
        if ( num % i == 0) {
            sum =  sum + i;
        }
    }
    if ( num == sum) {
        printf("%d is a perfect number", num);                //Output statement if the condition persists    
    }
        else {
            printf("%d is not a perfect number", num);       //Output statement if the condition does not persists
        }
}