#include <stdio.h>
int main() {
    int num, revnum = 0, remainder;                                    //Declaration and Initialization
    printf("Enter the number to be reversed\n");
    scanf("%d", &num);                                                //Accepting value from the user
                                                                      //Logic to reverse the number
    while( num != 0) {
        remainder = num % 10;
        revnum = revnum * 10 + remainder;
        num = num / 10;
    } 
    printf("The number after reversing is: %d", revnum);              //Output statement
    return 0;
}