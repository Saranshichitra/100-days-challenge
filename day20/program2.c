#include <stdio.h>
int main() {
    int num, sum = 0, remainder;                                    //Declaration and Initialization
    printf("Enter the binary number \n");
    scanf("%d", &num);                                              //Accepting value from the user                
    while( num != 0) {
        remainder = num % 10;
        if ( remainder == 1) {
            printf("0");
        }
        else {
            printf("1");
        }
        num = num / 10;
    }   
    return 0;
}