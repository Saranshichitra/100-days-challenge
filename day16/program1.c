#include <stdio.h>
int main() {
    int num, binarynum = 0, place = 1, remainder;                                         //Declaration and Initialization
    printf("Enter the number \n");
    scanf("%d", &num);                                                         //Accepting value from the user                
    while( num != 0) {
        remainder = num % 2;
         binarynum = binarynum + remainder * place;
        place = place * 10;
        num = num / 2;
    } 
    printf("binary equivalant =%d", binarynum);                              //Output Statement   
    return 0;
}