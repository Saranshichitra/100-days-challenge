#include <stdio.h>
int main() {
    int num, product = 1, remainder;                                    //Declaration and Initialization
    printf("Enter the number \n");
    scanf("%d", &num);                                              //Accepting value from the user                
    while( num != 0) {
        remainder = num % 10;
        if ( remainder % 2 != 0) {
        product = product * remainder;
        }
        num = num / 10;
    } 
    printf("Product of odd digits is=%d", product);                             //Output Statement   
    return 0;
}