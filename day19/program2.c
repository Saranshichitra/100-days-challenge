#include <stdio.h>
int main() {
    int num, sum = 0, remainder;                                    //Declaration and Initialization
    printf("Enter the number \n");
    scanf("%d", &num);                                              //Accepting value from the user                
    while( num != 0) {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    } 
    printf("Sum of the digits=%d", sum);                             //Output Statement   
    return 0;
}