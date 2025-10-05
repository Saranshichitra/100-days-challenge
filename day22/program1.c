#include <stdio.h>
int main() {
    int num, sum = 0, remainder,i ,product = 1, temp;                     //Declaration and Initialization
    printf("Enter the number \n");
    scanf("%d", &num);                                                    //Accepting value from the user
    temp = num;                                                           //Storing the number in temporary variable             
    while( num != 0) {
        remainder = num % 10;
        for ( i = 1; i <= remainder; i++ ) {
            product = product * i;
        }
        sum = sum + product;
        num = num / 10;
        product = 1;
    } 
    if ( sum == temp ) {
        printf("%d is a strong number", temp);                         // Output statement if the condition persists
    }  
    else {
    printf("%d is not a strong number", temp);                        //Output Statement if the condition does not persists  
    }                                                               
    return 0;

}