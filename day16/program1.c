#include <stdio.h>
int main() {
    int num, binarynum = 0, remainder;                                         //Declaration and Initialization
    printf("Enter the number \n");
    scanf("%d", &num);                                                         //Accepting value from the user                
    while( num != 0) {
        remainder = num % 2;
        if ( remainder == 0) {
            binarynum = binarynum * 10  ;
        }
        else {
          binarynum = binarynum * 10 + remainder ;
        }
        num = num / 2;
    } 
    printf("binary equivalant =%d", binarynum);                              //Output Statement   
    return 0;

}
