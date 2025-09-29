#include <stdio.h>
int main() {
    int num, revnum = 0, remainder, temp;                                    //Declaration and Initialization
    printf("Enter the number \n");
    scanf("%d", &num);                                                       //Accepting value from the user  
    temp = num;                                                 
                                                                           //Logic to reverse the number
    while( num != 0) {
        remainder = num % 10;
        revnum = revnum * 10 + remainder;
        num = num / 10;
    } 
    if ( temp == revnum) {                                           
    printf("The Number is palindrome");                                  //Output Statement if the condition persists
   }           
    else {
    printf("the Number is not palindrome");                             //Output Statement if the condition does not persists 
    }            
    return 0;
}