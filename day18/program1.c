#include <stdio.h>
int main() {
    int num;                                               //Declaration
    printf("Enter the number \n");
    scanf("%d", &num);                                     //Accepting value from the user
    printf("The factors of %d are:\n", num);   
    for ( int i = 1; i <= num; i++ ) {
        if ( num % i == 0) {
            printf("%d ", i);                              //Output Statement to print the valid output     
        }
    }    
return 0;
}